/*
 * XREFs of UsbhAcquirePowerContext @ 0x1C0019484
 * Callers:
 *     UsbhSet_D0_wQueued_Action @ 0x1C0019404 (UsbhSet_D0_wQueued_Action.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     memset @ 0x1C001E180 (memset.c)
 *     UsbhEtwGetActivityId @ 0x1C005C36C (UsbhEtwGetActivityId.c)
 */

char *__fastcall UsbhAcquirePowerContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, char a7)
{
  _DWORD *v11; // r15
  char *result; // rax
  char *v13; // rbx
  _QWORD *v14; // rcx
  _QWORD *v15; // rax

  v11 = FdoExt(a1);
  result = (char *)ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), 0x90uLL, 0x42554855u);
  v13 = result;
  if ( result )
  {
    memset(result, 0, 0x90uLL);
    *((_DWORD *)v13 + 8) = a6;
    *(_DWORD *)v13 = 2018662224;
    *((_QWORD *)v13 + 6) = a3;
    *((_QWORD *)v13 + 5) = a1;
    if ( a4 )
    {
      *((_DWORD *)v13 + 6) = *(_DWORD *)(*(_QWORD *)(a4 + 184) + 24LL);
      *((_QWORD *)v13 + 7) = a4;
      UsbhEtwGetActivityId(a4, v13 + 120);
    }
    if ( a5 )
    {
      *((_DWORD *)v13 + 7) = *(_DWORD *)(*(_QWORD *)(a5 + 184) + 24LL);
      *((_QWORD *)v13 + 8) = a5;
    }
    *((_QWORD *)v13 + 9) = a2;
    *((_QWORD *)v13 + 10) = KeGetCurrentThread();
    *(_BYTE *)(a2 + 132) = KeAcquireSpinLockRaiseToDpc(&HubG);
    *(_DWORD *)(a2 + 136) = 1;
    qword_1C006C500 = (__int64)&dword_1C006C508;
    if ( a7 )
    {
      *((_QWORD *)v11 + 114) = v13;
      v13[136] = 1;
    }
    v14 = (_QWORD *)qword_1C006C5C0;
    v15 = v13 + 8;
    if ( *(__int64 **)qword_1C006C5C0 != &qword_1C006C5B8 )
      __fastfail(3u);
    *((_QWORD *)v13 + 2) = qword_1C006C5C0;
    *v15 = &qword_1C006C5B8;
    *v14 = v15;
    qword_1C006C5C0 = (__int64)(v13 + 8);
    *(_DWORD *)(a2 + 136) = 0;
    qword_1C006C500 = 0LL;
    KeReleaseSpinLock(&HubG, *(_BYTE *)(a2 + 132));
    return v13;
  }
  return result;
}
