/*
 * XREFs of _PnpCtxCreateNode @ 0x140851F88
 * Callers:
 *     PiPnpRtlInit @ 0x14081BE64 (PiPnpRtlInit.c)
 *     _PnpCtxOpenMachine @ 0x140851D74 (_PnpCtxOpenMachine.c)
 *     _PnpCtxRegisterMachineNode @ 0x140A5DF28 (_PnpCtxRegisterMachineNode.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x140747D00 (RtlCreateUnicodeString.c)
 *     _SysCtxOpenMachine @ 0x1408520D0 (_SysCtxOpenMachine.c)
 *     _SysCtxCloseMachine @ 0x140A676C4 (_SysCtxCloseMachine.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpCtxCreateNode(
        int *a1,
        const WCHAR *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        HANDLE SourceHandle,
        UNICODE_STRING **a9)
{
  wchar_t *v12; // rsi
  UNICODE_STRING *Pool2; // rax
  UNICODE_STRING *v15; // rbx
  int v16; // eax
  unsigned int v17; // edi
  int v18; // ebp
  int v20; // ebp
  __int64 v21; // [rsp+40h] [rbp-28h] BYREF

  v12 = 0LL;
  v21 = 0LL;
  *a9 = 0LL;
  Pool2 = (UNICODE_STRING *)ExAllocatePool2(256LL, 152LL, 1380994640LL);
  v15 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  if ( RtlCreateUnicodeString(Pool2 + 2, a2) )
  {
    *(_DWORD *)&v15[3].Length = a3;
    v16 = SysCtxOpenMachine(a4, a5, a6, a7, SourceHandle, *a1, (__int64)&v21);
    v12 = (wchar_t *)v21;
    v17 = v16;
    if ( v16 >= 0 )
    {
      if ( *(_DWORD *)v21 >= 0xA000000u )
      {
        *(_QWORD *)&v15[4].Length = 0LL;
        v15[4].Buffer = 0LL;
        *(_QWORD *)&v15[5].Length = 0LL;
        v15[5].Buffer = 0LL;
        *(_QWORD *)&v15[6].Length = 0LL;
        v15[6].Buffer = 0LL;
        *(_QWORD *)&v15[7].Length = 0LL;
        *(_QWORD *)&v15[8].Length = 0LL;
        v15[8].Buffer = 0LL;
        *(_QWORD *)&v15[9].Length = 0LL;
        v18 = a3 - 1;
        if ( v18 )
        {
          v20 = v18 - 1;
          if ( v20 )
          {
            if ( v20 != 1 )
            {
              v17 = -1073741811;
              goto LABEL_12;
            }
            *(_QWORD *)&v15[4].Length = -1LL;
            *(_QWORD *)&v15[6].Length = -1LL;
            v15[6].Buffer = (wchar_t *)-1LL;
            *(_QWORD *)&v15[7].Length = -1LL;
            *(_QWORD *)&v15[8].Length = -1LL;
            v15[8].Buffer = (wchar_t *)-1LL;
            *(_QWORD *)&v15[9].Length = -1LL;
          }
        }
        v15[3].Buffer = v12;
        v12 = 0LL;
        *a9 = v15;
        goto LABEL_7;
      }
      v17 = -1073741637;
    }
  }
  else
  {
    v17 = -1073741801;
  }
LABEL_12:
  ExFreePoolWithTag(v15, 0);
LABEL_7:
  if ( v12 )
    SysCtxCloseMachine(v12);
  return v17;
}
