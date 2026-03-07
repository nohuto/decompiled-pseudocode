__int64 __fastcall DpiSetTargetAdjustedColorimetry2(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edx
  int v5; // r9d
  __int64 v6; // r10
  __int64 ChildDescriptor; // r11
  __int64 result; // rax
  __int64 v9; // rcx
  int v10; // r8d
  __int128 v11; // xmm1
  int v12; // eax
  __int64 v13; // rdx
  _OWORD v14[3]; // [rsp+30h] [rbp-48h] BYREF
  int v15; // [rsp+60h] [rbp-18h]

  ChildDescriptor = DpiFdoGetChildDescriptor(*(_QWORD *)(a1 + 64));
  result = 0LL;
  if ( !ChildDescriptor )
    return 3221225485LL;
  if ( *(_BYTE *)(ChildDescriptor + 65) )
  {
    v9 = *(_QWORD *)(v6 + 40);
    if ( *(_DWORD *)(v9 + 28) >= 0xA007u )
    {
      v10 = v4;
      v11 = *(_OWORD *)(a3 + 16);
      v12 = *(_DWORD *)(a3 + 48);
      v13 = *(_QWORD *)(v6 + 48);
      v14[0] = *(_OWORD *)a3;
      v14[2] = *(_OWORD *)(a3 + 32);
      v14[1] = v11;
      v15 = v12;
      return DpiDxgkDdiSetTargetAdjustedColorimetry2(v9, v13, v10, (unsigned int)v14, v5);
    }
  }
  return result;
}
