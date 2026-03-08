/*
 * XREFs of ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0099DE8
 * Callers:
 *     _lambda_febfd44819ec4f1448c7d434538d8b97_::operator() @ 0x1C0099B60 (_lambda_febfd44819ec4f1448c7d434538d8b97_--operator().c)
 *     NtUserDeferWindowPosAndBand @ 0x1C0099C50 (NtUserDeferWindowPosAndBand.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0067EB8 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     IAMThreadAccessGranted @ 0x1C009A2DC (IAMThreadAccessGranted.c)
 *     IsValidBand @ 0x1C009BB20 (IsValidBand.c)
 *     IsValidBandForProcess @ 0x1C009BB4C (IsValidBandForProcess.c)
 */

__int64 __fastcall _DeferWindowPosAndBand(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        signed int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        char a10)
{
  unsigned int v14; // ecx
  int v15; // ebx
  int v16; // edi
  int v17; // esi
  unsigned int v18; // edx
  int v19; // eax
  int v20; // r8d
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // ecx
  int v27; // edx
  __int64 v28; // r8
  __int64 v29; // rcx
  _QWORD *v30; // rax

  if ( (a10 & 1) != 0 )
  {
    v17 = a9;
    v22 = gptiCurrent;
    if ( (unsigned __int64)a3 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
    {
      v26 = *(_DWORD *)(a3[5] + 236);
      if ( v26 != a9 && *(_DWORD *)(*(_QWORD *)(a2 + 40) + 236LL) != v26 )
        goto LABEL_33;
    }
    v15 = 0;
    v16 = 1;
    if ( (a10 & 2) == 0 && !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
      goto LABEL_33;
    if ( !(unsigned int)IsValidBand(a9, a2, a3, v22) )
      goto LABEL_49;
    if ( !(unsigned int)IsValidBandForProcess(*(_QWORD *)(v23 + 424), a9, 0LL)
      || a9 == 15
      || *(_DWORD *)(*(_QWORD *)(a2 + 40) + 236LL) == 15 )
    {
LABEL_33:
      v25 = 5;
LABEL_50:
      UserSetLastError(v25);
      return 0LL;
    }
    if ( *(_QWORD *)(a2 + 104) != GetDesktopWindow(a2) || *(char *)(v24 + 20) < 0 )
      goto LABEL_49;
    if ( (unsigned __int64)a3 > 1 )
    {
      if ( a3 == (__int64 *)-2LL || a3 == (__int64 *)-1LL )
      {
        if ( a9 != 1 )
          goto LABEL_49;
      }
      else if ( *(_DWORD *)(a3[5] + 236) != a9 )
      {
        v27 = *(_DWORD *)(a1 + 28) - 1;
        if ( v27 >= 0 )
        {
          v28 = *(_QWORD *)(a1 + 40);
          v29 = v27;
          v30 = (_QWORD *)(v28 + 168LL * v27);
          while ( *v30 != *a3 )
          {
            --v27;
            v30 -= 21;
            if ( --v29 < 0 )
              goto LABEL_46;
          }
          if ( *(_DWORD *)(168LL * v27 + v28 + 152) != a9 )
            goto LABEL_49;
        }
LABEL_46:
        if ( v27 == -1 )
        {
LABEL_49:
          v25 = 87;
          goto LABEL_50;
        }
      }
    }
    v14 = a8 & 0xFFF9FBFF | 0x60000;
  }
  else
  {
    v14 = a8;
    v15 = 0;
    v16 = 0;
    v17 = 0;
  }
  if ( ((v16 != 0 ? -459776 : -66560) & v14) != 0 )
    goto LABEL_49;
  if ( (v14 & 2) != 0 )
  {
    v18 = a5;
  }
  else
  {
    if ( a4 > 0x7FFF )
    {
      a4 = 0x7FFF;
    }
    else if ( a4 < -32768 )
    {
      a4 = -32768;
    }
    v18 = a5;
    if ( a5 > 0x7FFF )
    {
      v18 = 0x7FFF;
    }
    else if ( a5 < -32768 )
    {
      v18 = -32768;
    }
  }
  v19 = a6;
  if ( (v14 & 1) != 0 )
  {
    v15 = a7;
  }
  else
  {
    if ( a6 < 0 )
    {
      v19 = 0;
    }
    else if ( a6 > 0x7FFF )
    {
      v19 = 0x7FFF;
    }
    v20 = a7;
    if ( a7 >= 0 )
    {
      if ( a7 > 0x7FFF )
        v20 = 0x7FFF;
      v15 = v20;
    }
  }
  return _DeferWindowPos(a1, a2, a3, a4, v18, v19, v15, v14, v17);
}
