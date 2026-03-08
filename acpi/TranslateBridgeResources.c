/*
 * XREFs of TranslateBridgeResources @ 0x1C0097910
 * Callers:
 *     <none>
 * Callees:
 *     CmMemIoResourceUpdateType @ 0x1C0043894 (CmMemIoResourceUpdateType.c)
 */

__int64 __fastcall TranslateBridgeResources(
        __int64 a1,
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor)
{
  unsigned __int8 Type; // r14
  ULONGLONG v11; // rax
  unsigned int v12; // r11d
  unsigned int v13; // ebx
  unsigned __int64 QuadPart; // r9
  ULONGLONG v15; // r15
  unsigned int v16; // r8d
  __int64 v17; // r10
  int v18; // eax
  unsigned __int64 v19; // rcx
  char v20; // al

  Type = a2->Type;
  v11 = RtlCmDecodeMemIoResource(a2, 0LL);
  v12 = *(_DWORD *)(a1 + 8);
  v13 = 0;
  QuadPart = a2->u.Generic.Start.QuadPart;
  v15 = v11;
  v16 = 0;
  if ( !v12 )
    return 3221226021LL;
  v17 = *(_QWORD *)(a1 + 16);
  while ( 1 )
  {
    v18 = *(_DWORD *)(v17 + 40LL * v16 + 32);
    if ( a3 != 1 )
      break;
    if ( (v18 & 2) != 0 )
    {
      v19 = *(_QWORD *)(v17 + 40LL * v16 + 8);
      v20 = *(_BYTE *)(v17 + 40LL * v16);
      goto LABEL_8;
    }
LABEL_13:
    if ( ++v16 >= v12 )
      return 3221226021LL;
  }
  if ( (v18 & 1) == 0 )
    goto LABEL_13;
  v19 = *(_QWORD *)(v17 + 40LL * v16 + 16);
  v20 = *(_BYTE *)(v17 + 40LL * v16 + 1);
LABEL_8:
  if ( v20 != Type && (v20 != 7 || Type != 3)
    || QuadPart < v19
    || QuadPart + v15 > *(_QWORD *)(v17 + 40LL * v16 + 24) + v19 )
  {
    goto LABEL_13;
  }
  *(_OWORD *)&Descriptor->Type = *(_OWORD *)&a2->Type;
  *((_DWORD *)&Descriptor->u.Memory48 + 3) = *((_DWORD *)&a2->u.Memory48 + 3);
  if ( a3 )
  {
    if ( a3 == 1 )
      CmMemIoResourceUpdateType(
        Descriptor,
        *(_BYTE *)(v17 + 40LL * v16 + 1),
        a2->u.Generic.Start.QuadPart + *(_QWORD *)(v17 + 40LL * v16 + 16) - *(_QWORD *)(v17 + 40LL * v16 + 8));
    else
      return (unsigned int)-1073741811;
  }
  else
  {
    CmMemIoResourceUpdateType(
      Descriptor,
      *(_BYTE *)(v17 + 40LL * v16),
      a2->u.Generic.Start.QuadPart + *(_QWORD *)(v17 + 40LL * v16 + 8) - *(_QWORD *)(v17 + 40LL * v16 + 16));
    return 288;
  }
  return v13;
}
