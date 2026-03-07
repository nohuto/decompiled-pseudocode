__int64 __fastcall NVMeGetLogPageHealthInfoCompletion(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 SrbExtension; // rbx
  __int64 v5; // r8
  __int64 *v6; // r10
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 v9; // rcx
  char v10; // al
  __int64 v11; // r9
  char v12; // al
  __int64 v13; // r9
  __int64 result; // rax
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v6 = (__int64 *)(SrbExtension + 4200);
  if ( *(_BYTE *)(v3 + 3) == 1 )
  {
    GetSrbDataBuffer(v5, &v15);
    v9 = *(unsigned __int8 *)(v7 + 2);
    v8 = *(_QWORD *)(SrbExtension + 4232);
    LOWORD(v9) = *(_WORD *)(v7 + 1);
    if ( v8 == 13 )
    {
      v10 = TemperatureFromKelvinToCelsius(v9);
      *(_BYTE *)(v11 + 9) = v10;
    }
    else if ( v8 == 47 )
    {
      v12 = TemperatureFromKelvinToCelsius(v9);
      *(_BYTE *)(v13 + 10) = v12;
    }
  }
  result = NVMeFreeDmaBuffer(a1, *(unsigned int *)(SrbExtension + 4240), v6, *(_QWORD *)(SrbExtension + 4208));
  *(_DWORD *)(SrbExtension + 4240) = 0;
  *(_QWORD *)(SrbExtension + 4232) = 0LL;
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  return result;
}
