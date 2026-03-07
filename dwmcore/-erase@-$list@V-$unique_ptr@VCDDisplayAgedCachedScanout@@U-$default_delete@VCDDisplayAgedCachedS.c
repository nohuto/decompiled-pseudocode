_QWORD *__fastcall std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::erase(__int64 a1, _QWORD *a2, void *a3)
{
  _QWORD *v4; // rsi
  CDDisplayAgedCachedScanout *v6; // rcx
  _QWORD *result; // rax

  v4 = *(_QWORD **)a3;
  **((_QWORD **)a3 + 1) = *(_QWORD *)a3;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = *((_QWORD *)a3 + 1);
  --*(_QWORD *)(a1 + 8);
  v6 = (CDDisplayAgedCachedScanout *)*((_QWORD *)a3 + 2);
  if ( v6 )
    CDDisplayAgedCachedScanout::`scalar deleting destructor'(v6);
  std::_Deallocate<16,0>(a3, 0x18uLL);
  result = a2;
  *a2 = v4;
  return result;
}
