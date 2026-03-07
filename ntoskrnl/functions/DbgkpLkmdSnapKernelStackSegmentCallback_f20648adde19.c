__int64 __fastcall DbgkpLkmdSnapKernelStackSegmentCallback(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  __int64 result; // rax

  v3 = *(_QWORD *)(a3 + 8);
  v4 = 0LL;
  v5 = a2[1];
  if ( v3 >= v5 && v3 < *a2 && !*(_BYTE *)(a3 + 16) )
    v4 = 5LL;
  result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)a3
                                                                                                 + 16448LL))(
             *(_QWORD *)a3 + 0x4000LL,
             a2[1],
             (unsigned int)(*(_DWORD *)a2 - v5),
             v4,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    result = *(_QWORD *)(a3 + 24);
    *(_DWORD *)(result + 4) |= 2u;
  }
  return result;
}
