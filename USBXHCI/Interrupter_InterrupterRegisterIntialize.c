__int64 __fastcall Interrupter_InterrupterRegisterIntialize(__int64 a1)
{
  __int64 i; // rdi
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp
  _DWORD *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  _DWORD *v10; // rdx
  signed __int32 v11[10]; // [rsp+0h] [rbp-68h] BYREF

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 80); i = (unsigned int)(i + 1) )
  {
    result = *(_QWORD *)(a1 + 32);
    v4 = *(_QWORD *)(result + 8 * i);
    if ( v4 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 88LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqdddi(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          *(_DWORD *)(v4 + 124),
          *(_QWORD *)(v4 + 144),
          32,
          v11[8],
          v4,
          *(_QWORD *)(v4 + 144),
          *(_DWORD *)(v4 + 120),
          *(_DWORD *)(v4 + 128),
          *(_DWORD *)(v4 + 124),
          *(_BYTE *)(*(_QWORD *)(v4 + 144) + 24LL) + 16 * *(_DWORD *)(v4 + 124));
      v6 = (_DWORD *)(*(_QWORD *)(v4 + 24) + 8LL);
      v7 = (unsigned __int16)*(_DWORD *)(v4 + 108);
      if ( *(_BYTE *)(v5 + 137) )
      {
        *v6 = v7;
        _InterlockedOr(v11, 0);
      }
      else
      {
        XilRegister_WriteUlong(v5, v6, v7);
      }
      Interrupter_UpdateERDP(v4, 1);
      v8 = *(_QWORD *)(v4 + 24);
      v9 = *(_QWORD *)(*(_QWORD *)(v4 + 152) + 24LL);
      v10 = (_DWORD *)(v8 + 16);
      if ( *(_BYTE *)(v5 + 137) )
      {
        result = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 336LL);
        if ( (result & 1) != 0 )
        {
          *v10 = v9;
          _InterlockedOr(v11, 0);
          *(_DWORD *)(v8 + 20) = HIDWORD(v9);
        }
        else
        {
          *(_QWORD *)v10 = v9;
        }
        _InterlockedOr(v11, 0);
      }
      else
      {
        result = XilRegister_WriteUlong64(v5, v10, v9);
      }
    }
  }
  return result;
}
