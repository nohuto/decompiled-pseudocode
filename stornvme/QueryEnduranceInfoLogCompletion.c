__int64 __fastcall QueryEnduranceInfoLogCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rbx
  __int64 v3; // r9
  __int64 result; // rax
  unsigned __int8 v5; // r10
  __int64 v6; // r11
  __int64 v7; // r9
  __int64 *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r8
  int v11; // ecx
  int v12; // ecx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  SrbExtension = GetSrbExtension(a2);
  result = GetSrbDataBuffer(v3, &v15);
  v8 = (__int64 *)(SrbExtension + 4200);
  v9 = result;
  if ( *(_BYTE *)(v7 + 3) == 1 )
  {
    v10 = *v8;
    v11 = *(unsigned __int16 *)(*(_QWORD *)(v6 + 8LL * v5 + 1952) + 94LL);
    *(_DWORD *)(result + 36) = 1;
    *(_DWORD *)(result + 40) = v11;
    v12 = *(unsigned __int8 *)(v10 + 5);
    *(_DWORD *)(result + 36) = 5;
    *(_DWORD *)(result + 48) = v12;
    v13 = *(_OWORD *)(v10 + 48);
    *(_DWORD *)(result + 36) = 13;
    *(_OWORD *)(result + 52) = v13;
    v14 = *(_OWORD *)(v10 + 64);
    *(_DWORD *)(result + 36) = 29;
    *(_OWORD *)(result + 68) = v14;
  }
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  if ( *v8 )
    result = NVMeFreeDmaBuffer(v6, *(unsigned int *)(SrbExtension + 4240), v8, *(_QWORD *)(SrbExtension + 4208));
  *v8 = 0LL;
  *(_DWORD *)(SrbExtension + 4240) = 0;
  *(_DWORD *)(v9 + 24) = 56;
  return result;
}
