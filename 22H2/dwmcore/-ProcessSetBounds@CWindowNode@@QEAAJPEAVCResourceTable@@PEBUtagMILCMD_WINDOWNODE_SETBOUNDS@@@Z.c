/*
 * XREFs of ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x1800C89FC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A36DC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18009FAF8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetBounds(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETBOUNDS *a3)
{
  int v3; // eax
  int v5; // r8d
  char v6; // r11
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // edx
  int v20; // r8d
  int v21; // r8d
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  int v25; // eax

  v3 = *((_DWORD *)this + 174);
  v5 = *((_DWORD *)this + 172);
  v6 = 0;
  v8 = 0;
  v9 = v3 - v5;
  v10 = *((_DWORD *)a3 + 10);
  if ( v9 >= 0 )
    v8 = v9;
  v11 = 0;
  if ( *((_DWORD *)a3 + 12) - v10 >= 0 )
    v11 = *((_DWORD *)a3 + 12) - v10;
  if ( v8 != v11 )
    goto LABEL_20;
  v12 = 0;
  if ( *((_DWORD *)a3 + 13) - *((_DWORD *)a3 + 11) >= 0 )
    v12 = *((_DWORD *)a3 + 13) - *((_DWORD *)a3 + 11);
  v13 = 0;
  if ( *((_DWORD *)this + 175) - *((_DWORD *)this + 173) >= 0 )
    v13 = *((_DWORD *)this + 175) - *((_DWORD *)this + 173);
  if ( v13 != v12 )
LABEL_20:
    v6 = 1;
  v14 = *((_DWORD *)a3 + 2);
  if ( (v5 - *((_DWORD *)this + 160) != v10 - v14
     || *((_DWORD *)this + 173) - *((_DWORD *)this + 161) != *((_DWORD *)a3 + 11) - *((_DWORD *)a3 + 3))
    && *((_QWORD *)this + 97) )
  {
    v6 = 1;
  }
  v15 = *((_DWORD *)a3 + 3);
  v16 = *((_DWORD *)a3 + 4);
  v17 = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 160) = v14;
  *((_DWORD *)this + 161) = v15;
  *((_DWORD *)this + 162) = v16;
  *((_DWORD *)this + 163) = v17;
  v18 = *((_DWORD *)a3 + 7);
  v19 = *((_DWORD *)a3 + 8);
  v20 = *((_DWORD *)a3 + 9);
  *((_DWORD *)this + 168) = *((_DWORD *)a3 + 6);
  *((_DWORD *)this + 169) = v18;
  *((_DWORD *)this + 170) = v19;
  *((_DWORD *)this + 171) = v20;
  v21 = *((_DWORD *)a3 + 13);
  v22 = *((_DWORD *)a3 + 11);
  v23 = *((_DWORD *)a3 + 12);
  *((_DWORD *)this + 172) = *((_DWORD *)a3 + 10);
  *((_DWORD *)this + 173) = v22;
  *((_DWORD *)this + 174) = v23;
  *((_DWORD *)this + 175) = v21;
  v24 = *((_DWORD *)this + 172);
  if ( v24 <= *((_DWORD *)this + 174) )
    v24 = *((_DWORD *)this + 174);
  *((_DWORD *)this + 174) = v24;
  v25 = *((_DWORD *)this + 173);
  if ( v25 <= v21 )
    v25 = v21;
  *((_DWORD *)this + 175) = v25;
  if ( v6 )
  {
    *((_BYTE *)this + 912) = 0;
    CVisual::PropagateFlags((__int64)this, 5u);
  }
  return 0LL;
}
