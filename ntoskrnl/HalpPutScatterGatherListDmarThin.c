char __fastcall HalpPutScatterGatherListDmarThin(__int64 a1, _DWORD *a2)
{
  char v2; // di
  __int64 v3; // rbx
  unsigned __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 i; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-20h]
  unsigned __int64 v11; // [rsp+30h] [rbp-18h]

  v10 = 0LL;
  v2 = 0;
  v11 = 0LL;
  v3 = 0LL;
  for ( i = *(_QWORD *)(a1 + 560); (unsigned int)v3 < *a2; v3 = (unsigned int)(v3 + 1) )
  {
    v6 = *(_QWORD *)&a2[6 * v3 + 4] & 0xFFFFFFFFFFFFF000uLL;
    if ( (_DWORD)v3 || v6 != **(_QWORD **)(a1 + 560) )
    {
      if ( !v2 )
      {
        (*(void (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(HalpDmaIommuInterfaceFcnTable + 64))(
          *(_QWORD *)(*(_QWORD *)(a1 + 512) + 40LL),
          v6,
          ((a2[6 * v3 + 6] + (a2[6 * v3 + 4] & 0xFFFu) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) >> 12);
        continue;
      }
    }
    else
    {
      v2 = 1;
    }
    v7 = *(_QWORD **)(a1 + 560);
    v11 = (a2[6 * v3 + 6] + (a2[6 * v3 + 4] & 0xFFFu) + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    v10 = v6 - *v7;
    (*(void (__fastcall **)(__int64 *))(HalpDmaIommuInterfaceFcnTable + 152))(&i);
  }
  return v2;
}
