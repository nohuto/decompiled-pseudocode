/*
 * XREFs of ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C009C380
 * Callers:
 *     NtUserSetProcessDpiAwarenessContext @ 0x1C009C0A0 (NtUserSetProcessDpiAwarenessContext.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     HMValidateSharedHandleNoRip @ 0x1C0247060 (HMValidateSharedHandleNoRip.c)
 */

void __fastcall UpdateWindowTreeDpiAwareness(struct tagPROCESSINFO *a1, struct tagWND *a2)
{
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 i; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  char *v10; // rdi
  __int64 *v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rdx

  if ( qword_1C02D71E8 && (int)qword_1C02D71E8() >= 0 )
  {
    v4 = qword_1C02D71F0 ? qword_1C02D71F0(a2, 1LL, 0LL) : 0LL;
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 32);
      for ( i = v4 + 32; v5 != 1; i += 8LL )
      {
        PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( (unsigned __int64)(unsigned __int16)v5 < *((_QWORD *)gpsi + 1) )
        {
          v9 = dword_1C02D0E10 * (unsigned int)(unsigned __int16)v5;
          LOWORD(v5) = WORD1(v5) & 0x7FFF;
          v10 = (char *)qword_1C02D0E08 + (unsigned int)v9;
          v11 = (__int64 *)((char *)gpKernelHandleTable + 24 * ((__int64)(unsigned int)v9 >> 5));
          if ( ((WORD1(v5) & 0x7FFF) == *((_WORD *)v10 + 13)
             || (_WORD)v5 == 0x7FFF
             || !(_WORD)v5 && PsGetCurrentProcessWow64Process(3 * ((__int64)(unsigned int)v9 >> 5), v9, v7, v8))
            && (v10[25] & 1) == 0
            && v10[24] == 1 )
          {
            v12 = *v11;
            if ( *v11 )
            {
              if ( qword_1C02D71F8 )
              {
                if ( (int)qword_1C02D71F8() >= 0 && *(struct tagPROCESSINFO **)(*(_QWORD *)(v12 + 16) + 424LL) == a1 )
                {
                  *(_DWORD *)(*(_QWORD *)(v12 + 40) + 288LL) = *((_DWORD *)a1 + 70);
                  v13 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(v12 + 40) + 256LL));
                  if ( qword_1C02D7200 )
                    qword_1C02D7200(v12, v13);
                }
              }
            }
          }
        }
        v5 = *(_QWORD *)(i + 8);
      }
      if ( qword_1C02D68E0 )
        qword_1C02D68E0(v4);
    }
  }
}
