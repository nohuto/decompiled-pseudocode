__int64 __fastcall RFONTOBJ::bCheckMetricsCache(RFONTOBJ *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = *(_QWORD **)this;
  if ( *(_QWORD *)(*(_QWORD *)this + 512LL)
     + (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 640LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL)
     + 64 <= *(_QWORD *)(*(_QWORD *)this + 520LL) )
    return 1LL;
  result = Win32AllocPool(1824LL, 1667326791LL, a3, a4);
  if ( result )
  {
    *(_QWORD *)result = v4[67];
    v4[65] = result + 1824;
    v4[64] = result + 16;
    v4[67] = result;
    return 1LL;
  }
  return result;
}
