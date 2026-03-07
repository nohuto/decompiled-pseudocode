__int64 __fastcall CManipulation::HrFindInterface(CManipulation *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c3c5a1de_4dff_4600_9562_70179f475db1.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c3c5a1de_4dff_4600_9562_70179f475db1.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c3c5a1de_4dff_4600_9562_70179f475db1.Data4;
    if ( v4 )
    {
      return 2147500034LL;
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 72) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  return result;
}
