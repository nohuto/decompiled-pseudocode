void __fastcall xxxTooltipRender(const WCHAR **a1, Gre::Base *a2)
{
  __int64 DPIMETRICSForDpi; // rax
  unsigned int v5; // edi
  _DWORD *v6; // r9
  int v7; // r8d
  int v8; // ecx
  __int64 v9; // rcx
  unsigned int v10; // edi
  struct tagTHREADINFO *v11; // rax
  int v12; // eax
  const WCHAR *SourceString; // r10
  __int64 v14; // rcx
  RECT v15; // [rsp+40h] [rbp-38h] BYREF

  if ( a1[6] )
  {
    DPIMETRICSForDpi = GetDPIMETRICSForDpi();
    GreSelectFontInternal((__int64)a2, *(_QWORD *)(DPIMETRICSForDpi + 56), 1);
    GreSetTextColor((__int64)a2, *(unsigned int *)(gpsi + 4660LL));
    v5 = *(_DWORD *)(gpsi + 4664LL);
    v6 = (_DWORD *)*((_QWORD *)*a1 + 5);
    v7 = v6[27];
    v8 = v6[26];
    v15.left = 0;
    v15.right = v6[28] - v8;
    v15.top = v6[27] - v7;
    v15.bottom = v6[29] - v7;
    if ( v5 == (unsigned int)GreGetNearestColor(a2, v5) )
    {
      GreSetBkColor((HDC)a2, v5);
      v10 = 2;
    }
    else
    {
      FillRect((HDC)a2, &v15, *(HBRUSH *)(gpsi + 4888LL));
      GreSetBkMode((HDC)a2, 1);
      v10 = 4;
    }
    v11 = PtiCurrentShared(v9);
    v12 = CALL_LPK(v11);
    SourceString = a1[6];
    v14 = -1LL;
    do
      ++v14;
    while ( SourceString[v14] );
    if ( v12 )
      xxxClientExtTextOutW(a2, 2, 1, v10, &v15, SourceString, v14);
    else
      GreExtTextOutW((__int64)a2, 2u, 1u, v10, (__int64)&v15, (__int64)SourceString, v14);
  }
}
