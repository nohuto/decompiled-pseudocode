__int64 __fastcall RGNMEMOBJ::bAddNullScan(RGNMEMOBJ *this, int a2, int a3)
{
  unsigned int v6; // r10d
  __int64 result; // rax
  _DWORD *v8; // rdx

  v6 = *(_DWORD *)(*(_QWORD *)this + 24LL);
  if ( v6 - *(_DWORD *)(*(_QWORD *)this + 48LL) < 0x10
    && (v6 + 1136 < v6 || !(unsigned int)RGNOBJ::bExpand(this, v6 + 1136)) )
  {
    return 0LL;
  }
  result = 1LL;
  v8 = *(_DWORD **)(*(_QWORD *)this + 40LL);
  ++*(_DWORD *)(*(_QWORD *)this + 52LL);
  v8[1] = a2;
  v8[2] = a3;
  *(_DWORD *)(*(_QWORD *)this + 48LL) += 16;
  v8[3] = 0;
  *v8 = 0;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = v8 + 4;
  return result;
}
