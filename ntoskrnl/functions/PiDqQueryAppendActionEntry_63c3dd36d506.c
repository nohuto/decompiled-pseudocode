__int64 __fastcall PiDqQueryAppendActionEntry(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v4; // rcx
  __int64 result; // rax
  unsigned int PnpObjectType; // eax

  v2 = a1 + 192;
  v4 = *(_QWORD **)(a1 + 200);
  if ( *v4 != v2 )
    __fastfail(3u);
  *a2 = v2;
  a2[1] = v4;
  *v4 = a2;
  *(_QWORD *)(v2 + 8) = a2;
  result = (unsigned int)(*(_DWORD *)(a1 + 208) + 1);
  *(_DWORD *)(a1 + 208) = result;
  if ( (unsigned int)result > 0x3E8 )
  {
    PnpObjectType = PiDqGetPnpObjectType(*(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL));
    result = 2 * (unsigned int)PiDmGetObjectCount(PnpObjectType);
    if ( *(_DWORD *)(a1 + 208) > (unsigned int)result )
    {
      *(_DWORD *)(a1 + 216) |= 1u;
      return PiDqQueryFreeActiveData(a1);
    }
  }
  return result;
}
