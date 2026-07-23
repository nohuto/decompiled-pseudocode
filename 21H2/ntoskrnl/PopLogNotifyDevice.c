/*
 * XREFs of PopLogNotifyDevice @ 0x140576D0C
 * Callers:
 *     PopRequestPowerIrp @ 0x14036DED0 (PopRequestPowerIrp.c)
 *     PopNotifyDevice @ 0x14099390C (PopNotifyDevice.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     RtlStringCchCopyW @ 0x1403711F0 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

void *__fastcall PopLogNotifyDevice(__int64 a1, __int64 a2, __int64 a3)
{
  void *result; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // ebx
  _QWORD v12[32]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v13; // [rsp+130h] [rbp+30h] BYREF
  int v14; // [rsp+138h] [rbp+38h]
  int v15; // [rsp+13Ch] [rbp+3Ch]

  result = memset(v12, 0, sizeof(v12));
  if ( (xmmword_140CFC490 & 0x8000) != 0 )
  {
    v7 = *(_QWORD *)(a3 + 184);
    v8 = *(_QWORD *)(a1 + 8);
    v12[0] = a3;
    v12[1] = *(_QWORD *)(v8 + 24);
    *(_WORD *)((char *)&v12[2] + 1) = *(_WORD *)(v7 - 72);
    HIDWORD(v12[2]) = *(_DWORD *)(v7 - 56);
    LODWORD(v12[3]) = *(_DWORD *)(v7 - 48);
    if ( a2 )
    {
      v9 = *(_QWORD *)(a2 + 72);
      LOBYTE(v12[2]) = *(_BYTE *)(a2 + 56);
      if ( v9 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( *(_WORD *)(v9 + 2 * v10) );
        v11 = v10;
        if ( (unsigned int)v10 > 0x6C )
          v11 = 108;
        RtlStringCchCopyW((NTSTRSAFE_PWSTR)&v12[4], 0x6DuLL, (NTSTRSAFE_PCWSTR)(v9 + 2LL * (unsigned int)(v10 - v11)));
        goto LABEL_11;
      }
    }
    else
    {
      LOBYTE(v12[2]) = 0;
    }
    LOWORD(v12[4]) = 0;
    v11 = 0;
LABEL_11:
    v15 = 0;
    v13 = v12;
    v14 = 2 * v11 + 40;
    return (void *)EtwTraceKernelEvent((int)&v13, 1, 0x80008000, 4646, 4200450);
  }
  return result;
}
