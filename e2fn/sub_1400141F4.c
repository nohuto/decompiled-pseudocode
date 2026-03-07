__int64 __fastcall sub_1400141F4(__int64 a1, _OWORD *a2, __int64 a3)
{
  __int64 result; // rax

  if ( *(_QWORD *)a3 != *(_QWORD *)(a1 + 656) || (result = *(_QWORD *)(a3 + 8), result != *(_QWORD *)(a1 + 664)) )
  {
    *(_OWORD *)(a1 + 656) = *(_OWORD *)a3;
    *(_OWORD *)(a1 + 672) = *a2;
    *(_OWORD *)(a1 + 688) = a2[1];
    *(_OWORD *)(a1 + 704) = a2[2];
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 616));
    *(_OWORD *)(*(_QWORD *)(a1 + 544) + 16LL * *(unsigned int *)(a1 + 480)) = *(_OWORD *)a3;
    *(_DWORD *)(*(_QWORD *)(a1 + 560) + 8LL * *(unsigned int *)(a1 + 480) + 4) = 2;
    *(_DWORD *)(*(_QWORD *)(a1 + 560) + 8LL * *(unsigned int *)(a1 + 480)) = 0;
    result = *(_DWORD *)(a1 + 472) & (unsigned int)(*(_DWORD *)(a1 + 480) + 1);
    *(_DWORD *)(a1 + 480) = result;
  }
  return result;
}
