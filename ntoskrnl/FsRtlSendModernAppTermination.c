/*
 * XREFs of FsRtlSendModernAppTermination @ 0x1402EF950
 * Callers:
 *     FsRtlpOplockSendModernAppTermination @ 0x1402EF888 (FsRtlpOplockSendModernAppTermination.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall FsRtlSendModernAppTermination(_DWORD *a1, unsigned int a2, int a3)
{
  __int64 v3; // rax
  _DWORD v5[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+48h] [rbp-20h] BYREF

  if ( a1 && a2 )
  {
    if ( a2 > 0x1000 )
      return 2147483653LL;
  }
  else
  {
    v5[0] = -1;
    a1 = v5;
    v5[1] = 0;
    a2 = 4;
  }
  if ( !a3 )
  {
    v3 = WNF_FLT_RUNDOWN_WAIT;
    goto LABEL_7;
  }
  if ( a3 == 1 )
  {
    v3 = WNF_FSRL_OPLOCK_BREAK;
LABEL_7:
    v6 = v3;
    return ZwUpdateWnfStateData(&v6, a1, a2);
  }
  return 3221225485LL;
}
