__int64 __fastcall sub_140007940(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  __int64 v9; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 result; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  char v18; // [rsp+40h] [rbp-30h] BYREF
  volatile signed __int32 *v19; // [rsp+48h] [rbp-28h]
  _BYTE v20[16]; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v21[16]; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v22; // [rsp+98h] [rbp+28h] BYREF

  v22 = a2;
  v9 = a1 - 416;
  v12 = sub_1400A27D4(v20, a3);
  sub_140005D70(v9, a2, v12, a4, a5, a6, a7, a8);
  v13 = sub_1400A3D90(
          (unsigned int)&v18,
          808464439,
          (unsigned int)&v22,
          a3,
          a4,
          (__int64)&a6,
          (__int64)&a7,
          (__int64)&a8);
  v14 = sub_1400A27D4(v21, v13);
  result = sub_14006FDF0(v9, v14);
  v16 = v19;
  if ( v19 )
  {
    result = (unsigned int)_InterlockedDecrement(v19 + 2);
    if ( !(_DWORD)result )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      result = (unsigned int)_InterlockedDecrement(v16 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  v17 = *(volatile signed __int32 **)(a3 + 8);
  if ( v17 )
  {
    result = (unsigned int)_InterlockedDecrement(v17 + 2);
    if ( !(_DWORD)result )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      result = (unsigned int)_InterlockedDecrement(v17 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  return result;
}
