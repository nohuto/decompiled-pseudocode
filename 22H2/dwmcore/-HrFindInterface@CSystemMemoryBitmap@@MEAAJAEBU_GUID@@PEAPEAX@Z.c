/*
 * XREFs of ?HrFindInterface@CSystemMemoryBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CC300
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180069080 (-HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrFindInterface(CSystemMemoryBitmap *this, const struct _GUID *a2, void **a3)
{
  char *v3; // r9
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = 0LL;
  result = 2147942487LL;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
    if ( v5 )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_040bd03f_cd21_4ba9_8975_23925ae81cd8.Data4;
      if ( v6 )
      {
        return CBitmap::HrFindInterface(this, a2, a3);
      }
      else
      {
        if ( (unsigned int)(*((_DWORD *)this + 50) - 87) <= 1 )
        {
          result = 0LL;
          v3 = (char *)this + 256;
        }
        else
        {
          result = 2147500034LL;
        }
        *a3 = v3;
      }
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 240) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  return result;
}
