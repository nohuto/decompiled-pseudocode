/*
 * XREFs of ?RemoveUdwmDCompVisualFromUdwmTree@CGlobalLightSet@@AEBAJPEAVUdwmDcompVisual@@@Z @ 0x1800BB6FC
 * Callers:
 *     ??1CGlobalLightSet@@EEAA@XZ @ 0x1800BB51C (--1CGlobalLightSet@@EEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024BC0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18003B1F0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ValidateUdwmDCompVisual@CGlobalLightSet@@AEBA_NPEAVUdwmDcompVisual@@@Z @ 0x1800432A8 (-ValidateUdwmDCompVisual@CGlobalLightSet@@AEBA_NPEAVUdwmDcompVisual@@@Z.c)
 */

__int64 __fastcall CGlobalLightSet::RemoveUdwmDCompVisualFromUdwmTree(CGlobalLightSet *this, struct CVisual **a2)
{
  struct CVisual *v3; // rdx
  __int64 v4; // r15
  struct CVisual *v5; // rbp
  int v6; // eax
  __int64 v7; // r14
  volatile signed __int32 *v8; // rbx
  int inserted; // eax
  unsigned int v10; // edi
  VisualCollection *v11; // r12
  __int64 v12; // rdx
  int v14; // eax
  unsigned int v15; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !CGlobalLightSet::ValidateUdwmDCompVisual(this, (struct UdwmDcompVisual *)a2) )
    return 0LL;
  v3 = a2[2];
  v4 = *((_QWORD *)v3 + 3);
  if ( !v4 )
    return 0LL;
  v5 = a2[6];
  v6 = *((_DWORD *)v5 + 18) - 1;
  v7 = v6;
  if ( v6 < 0 )
  {
    v11 = (VisualCollection *)(v4 + 32);
LABEL_18:
    v14 = VisualCollection::Remove(v11, v3);
    v15 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16B,
        (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
        (const char *)(unsigned int)v14);
      return v15;
    }
    return 0LL;
  }
  while ( 1 )
  {
    v8 = *(volatile signed __int32 **)(*((_QWORD *)v5 + 6) + 8 * v7);
    if ( v8 )
      _InterlockedIncrement(v8 + 2);
    inserted = VisualCollection::Remove((struct CVisual *)((char *)v5 + 32), (struct CVisual *)v8);
    v10 = inserted;
    if ( inserted < 0 )
      break;
    v11 = (VisualCollection *)(v4 + 32);
    inserted = VisualCollection::InsertRelative((VisualCollection *)(v4 + 32), (struct CVisual *)v8, a2[2], 1u, 1);
    v10 = inserted;
    if ( inserted < 0 )
    {
      v12 = 353LL;
      goto LABEL_14;
    }
    if ( v8 )
      CBaseObject::Release((CBaseObject *)v8);
    if ( --v7 < 0 )
    {
      v3 = a2[2];
      goto LABEL_18;
    }
  }
  v12 = 352LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
    (const char *)(unsigned int)inserted);
  if ( v8 )
    CBaseObject::Release((CBaseObject *)v8);
  return v10;
}
