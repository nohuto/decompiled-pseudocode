/*
 * XREFs of ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C007DFEC
 * Callers:
 *     ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C007DB30 (-UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C007DBA0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 * Callees:
 *     McTemplateK0qhq_EtwWriteTransfer @ 0x1C01509B8 (McTemplateK0qhq_EtwWriteTransfer.c)
 */

char __fastcall CInputGlobals::_UpdateLastInputTime(__int64 a1, __int64 a2, int a3)
{
  int v3; // r9d
  unsigned __int128 v5; // rax

  v3 = 1;
  *(_QWORD *)(a1 + 16) = a2;
  if ( a3 == 1 || a3 > 2 && (a3 <= 5 || a3 == 9 || a3 == 11 || a3 > 12 && (a3 <= 14 || a3 > 15 && a3 <= 17)) )
    *(_QWORD *)(a1 + 24) = a2;
  if ( (W32kEtwEnabledKeyword & 0x2000000000008000LL) != 0 )
  {
    LOBYTE(v5) = byte_1C028DB38 - 1;
    if ( (unsigned __int8)(byte_1C028DB38 - 1) > 2u && (qword_1C028DB20 & 0x2000000000008000LL) != 0 )
    {
      LOBYTE(v5) = 0;
      if ( (qword_1C028DB28 & 0x2000000000008000LL) == qword_1C028DB28 && giPowerOffTimeOutMs > 0 )
      {
        v5 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
           * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
        if ( *((_QWORD *)&v5 + 1) - a2 > (unsigned __int64)giPowerOffTimeOutMs
          && (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
        {
          if ( gProtocolType )
            v3 = 0;
          LOBYTE(v5) = McTemplateK0qhq_EtwWriteTransfer(
                         giPowerOffTimeOutMs,
                         (unsigned int)&DisplayTimeoutResetEvent,
                         0,
                         v3,
                         v3,
                         giPowerOffTimeOutMs);
        }
      }
    }
  }
  return v5;
}
