/*
 * XREFs of ?BltValidInit@@YAHPEAUtagSMWP@@@Z @ 0x1C00435F8
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0047DD4 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     ?IsStillWindowC@@YAHPEAUHWND__@@@Z @ 0x1C0043740 (-IsStillWindowC@@YAHPEAUHWND__@@@Z.c)
 *     SpbCheckRect @ 0x1C00DC7C0 (SpbCheckRect.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00DF0C0 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01CC668 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 */

__int64 __fastcall BltValidInit(struct tagSMWP *a1)
{
  __int64 v1; // rbx
  int v2; // r14d
  int v3; // esi
  int v4; // edi
  int v5; // ebp
  struct tagWND *v6; // r15
  HRGN EmptyRgn; // rax

  v1 = *((_QWORD *)a1 + 5);
  v2 = 0;
  v3 = *((_DWORD *)a1 + 7);
  v4 = 0;
  while ( --v3 >= 0 )
  {
    *(_QWORD *)(v1 + 96) = 0LL;
    v5 = *(_DWORD *)(v1 + 32);
    if ( *(_QWORD *)v1 )
    {
      v6 = (struct tagWND *)HMValidateHandleNoSecure(*(_QWORD *)v1, 1);
      if ( v6 && (unsigned int)IsStillWindowC(*(HWND *)(v1 + 8)) )
      {
        if ( *(_QWORD *)(gpDispInfo + 32LL) && (v5 & 8) == 0 )
          SpbCheckRect(v6, (struct tagRECT *)(*((_QWORD *)v6 + 5) + 88LL), 1u);
        ++v2;
        if ( (v5 & 0x18E7) != 0x1807 )
          v4 = 1;
        if ( (*(_DWORD *)(v1 + 32) & 8) == 0 )
        {
          if ( !*(_DWORD *)(gpsi + 2220LL) )
            PreventInterMonitorBlts((struct tagCVR *)v1);
          *(_DWORD *)(v1 + 88) = 0;
          EmptyRgn = (HRGN)CreateEmptyRgn();
          *(_QWORD *)(v1 + 96) = EmptyRgn;
          if ( !EmptyRgn || !(unsigned int)SwpCalcVisRgn(v6, EmptyRgn) )
            *(_DWORD *)(v1 + 88) = 2;
        }
      }
      else
      {
        *(_QWORD *)v1 = 0LL;
        *(_DWORD *)(v1 + 32) = 6159;
      }
    }
    v1 += 168LL;
  }
  return v2 & (unsigned int)-(v4 != 0);
}
