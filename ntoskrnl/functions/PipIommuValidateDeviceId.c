__int64 __fastcall PipIommuValidateDeviceId(ULONG_PTR a1, ULONG_PTR a2, __int64 a3)
{
  ULONG_PTR v3; // r10
  ULONG_PTR v4; // r11
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx

  v3 = a2;
  v4 = a1;
  result = (unsigned int)(*(_DWORD *)a2 - 1);
  if ( (unsigned int)result > 4 )
  {
    LODWORD(result) = -1073741811;
    goto LABEL_14;
  }
  if ( *(_DWORD *)a2 == 1 )
  {
    v6 = *(_QWORD *)(a2 + 16);
    if ( v6 && (v7 = *(unsigned __int16 *)(v3 + 14), (_WORD)v7) )
    {
      if ( v6 < v3 + 24 )
        result = 3221225793LL;
      else
        result = v3 + a3 < v6 + v7 ? 0x80000005 : 0;
    }
    else
    {
      result = 3221225990LL;
    }
  }
  else
  {
    if ( *(_DWORD *)a2 != 2 )
      return result;
    result = IdpValidateAcpiName(a2, a3);
  }
  if ( (int)result < 0 )
LABEL_14:
    KeBugCheckEx(0xCAu, 0x12uLL, v4, v3, (int)result);
  return result;
}
