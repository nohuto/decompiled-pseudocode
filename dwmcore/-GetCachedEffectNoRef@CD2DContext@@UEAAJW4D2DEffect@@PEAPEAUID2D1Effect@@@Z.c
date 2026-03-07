__int64 __fastcall CD2DContext::GetCachedEffectNoRef(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  *a3 = 0LL;
  v13 = 0LL;
  v6 = a1 + 1072;
  if ( !a1 )
    v6 = 1088LL;
  v7 = *(_DWORD *)v6;
  if ( *(int *)v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, v7, 0x5C9u, 0LL);
  }
  else
  {
    v8 = a2;
    v9 = *(_QWORD *)(a1 + 8LL * a2 + 216);
    if ( v9 )
    {
LABEL_7:
      *a3 = v9;
      goto LABEL_11;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**(_QWORD **)(a1 + 200) + 504LL))(
            *(_QWORD *)(a1 + 200),
            (char *)&xmmword_1803E1D54 + 24 * a2,
            &v13);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v9 = v13;
      v5 = 0LL;
      *(_QWORD *)(a1 + 8 * v8 + 216) = v13;
      v13 = 0LL;
      goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x5CEu, 0LL);
  }
  v5 = v13;
LABEL_11:
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((a1 - 16) & -(__int64)(a1 != 0), v7, 0);
}
