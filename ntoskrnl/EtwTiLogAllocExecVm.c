/*
 * XREFs of EtwTiLogAllocExecVm @ 0x1407F1018
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1407C5270 (MiAllocateVirtualMemory.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     EtwpTiFillProcessIdentity @ 0x140367BF4 (EtwpTiFillProcessIdentity.c)
 *     EtwProviderEnabled @ 0x140367E30 (EtwProviderEnabled.c)
 *     EtwpTiFillThreadIdentity @ 0x140367E98 (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

BOOLEAN EtwTiLogAllocExecVm(__int64 a1, char a2, ...)
{
  BOOLEAN result; // al
  __int64 v5; // rcx
  _KPROCESS *Process; // r14
  _KPROCESS *v7; // rsi
  const EVENT_DESCRIPTOR *v8; // rbx
  int v9; // eax
  int v10; // eax
  int v11; // r9d
  int v12; // eax
  int v13; // r9d
  int v14; // eax
  int v15; // r9d
  unsigned int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  REGHANDLE v21; // rcx
  unsigned __int64 v22; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[24]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+228h] [rbp+120h] BYREF
  va_list va; // [rsp+228h] [rbp+120h]
  __int64 v28; // [rsp+230h] [rbp+128h] BYREF
  va_list va1; // [rsp+230h] [rbp+128h]
  __int64 v30; // [rsp+238h] [rbp+130h] BYREF
  va_list va2; // [rsp+238h] [rbp+130h]
  va_list va3; // [rsp+240h] [rbp+138h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v26 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v28 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v30 = va_arg(va3, _QWORD);
  result = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0xFuLL);
  if ( result )
  {
    v5 = 0LL;
    Process = KeGetCurrentThread()->ApcState.Process;
    v7 = KeGetCurrentThread()->Process;
    if ( v7 == (_KPROCESS *)a1 )
      v5 = 8LL;
    v8 = *(const EVENT_DESCRIPTOR **)((char *)off_1400071E0 + (a2 != 0 ? 0 : 0x10) + v5);
    result = EtwEventEnabled(EtwThreatIntProvRegHandle, v8);
    if ( result )
    {
      v9 = EtwpTiFillProcessIdentity(UserData, (__int64)Process, &v22);
      v10 = EtwpTiFillThreadIdentity((__int64)&UserData[v9], (__int64)KeGetCurrentThread());
      v12 = EtwpTiFillProcessIdentity(&UserData[v10 + v11].Ptr, a1, &v23);
      v14 = EtwpTiFillProcessIdentity(&UserData[v12 + v13].Ptr, (__int64)v7, &v24);
      v16 = v14 + v15;
      v17 = v16;
      *(&UserData[0].Reserved + 1 * v17) = 0;
      UserData[v17].Ptr = (ULONGLONG)va;
      UserData[v17].Size = 8;
      v18 = v16 + 1;
      *(&UserData[0].Reserved + 1 * v18) = 0;
      UserData[v18].Ptr = (ULONGLONG)va1;
      UserData[v18].Size = 8;
      v19 = v16 + 2;
      v16 += 3;
      v19 *= 2LL;
      *(&UserData[0].Reserved + 2 * v19) = 0;
      *(&UserData[0].Ptr + v19) = (ULONGLONG)va2;
      *(&UserData[0].Size + 2 * v19) = 4;
      v20 = v16;
      *(&UserData[0].Reserved + 1 * v20) = 0;
      UserData[v20].Ptr = (ULONGLONG)va3;
      v21 = EtwThreatIntProvRegHandle;
      UserData[v20].Size = 4;
      return EtwWrite(v21, v8, 0LL, v16 + 1, UserData);
    }
  }
  return result;
}
