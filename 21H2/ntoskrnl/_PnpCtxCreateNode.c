/*
 * XREFs of _PnpCtxCreateNode @ 0x140827AA8
 * Callers:
 *     _PnpCtxOpenMachine @ 0x140827888 (_PnpCtxOpenMachine.c)
 *     _PnpCtxRegisterMachineNode @ 0x140A22DB0 (_PnpCtxRegisterMachineNode.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     _SysCtxOpenMachine @ 0x140827BDC (_SysCtxOpenMachine.c)
 *     _SysCtxCloseMachine @ 0x140A2CF04 (_SysCtxCloseMachine.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpCtxCreateNode(
        int *a1,
        const WCHAR *a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        HANDLE SourceHandle,
        UNICODE_STRING **a9)
{
  UNICODE_STRING **v9; // r14
  wchar_t *v13; // rsi
  UNICODE_STRING *Pool2; // rax
  UNICODE_STRING *v15; // rbx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  int v19; // eax
  unsigned int v20; // edi
  int v21; // ebp
  int v23; // ebp

  v9 = a9;
  v13 = 0LL;
  a6 = 0LL;
  *a9 = 0LL;
  Pool2 = (UNICODE_STRING *)ExAllocatePool2(256LL, 152LL, 1380994640LL);
  v15 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  if ( RtlCreateUnicodeString(Pool2 + 2, a2) )
  {
    v18 = a7;
    *(_DWORD *)&v15[3].Length = a3;
    v19 = SysCtxOpenMachine(v16, a5, v17, v18, SourceHandle, *a1, (__int64)&a6);
    v13 = (wchar_t *)a6;
    v20 = v19;
    if ( v19 >= 0 )
    {
      if ( *(_DWORD *)a6 >= 0xA000000u )
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
        v21 = a3 - 1;
        if ( v21 )
        {
          v23 = v21 - 1;
          if ( v23 )
          {
            if ( v23 != 1 )
            {
              v20 = -1073741811;
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
        v15[3].Buffer = v13;
        v13 = 0LL;
        *v9 = v15;
        goto LABEL_7;
      }
      v20 = -1073741637;
    }
  }
  else
  {
    v20 = -1073741801;
  }
LABEL_12:
  ExFreePoolWithTag(v15, 0);
LABEL_7:
  if ( v13 )
    SysCtxCloseMachine(v13);
  return v20;
}
