__int64 __fastcall DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = a1[1];
  if ( v1 == *a1 )
    return 0LL;
  else
    return (v1 - 24) & -(__int64)(v1 != 0);
}
