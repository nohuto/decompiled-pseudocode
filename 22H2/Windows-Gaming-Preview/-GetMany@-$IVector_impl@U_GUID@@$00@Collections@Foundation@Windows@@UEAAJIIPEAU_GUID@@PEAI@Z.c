/*
 * XREFs of ?GetMany@?$IVector_impl@U_GUID@@$00@Collections@Foundation@Windows@@UEAAJIIPEAU_GUID@@PEAI@Z @ 0x180037F20
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800456EC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::IVector_impl<_GUID,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        unsigned int *a5)
{
  unsigned int *v9; // r14
  __int64 result; // rax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  unsigned int v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = 0;
  memset_0(a4, 0, 16LL * a3);
  v9 = a5;
  *a5 = 0;
  result = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 56LL))(a1, &v14);
  if ( (int)result >= 0 )
  {
    v11 = v14;
    if ( a2 <= v14 )
    {
      v12 = 0;
      if ( a3 )
      {
        while ( 1 )
        {
          v13 = v12 + a2;
          if ( (unsigned int)v13 >= v11 )
            break;
          result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 48LL))(
                     a1,
                     v13,
                     (__int64)a4 + 16 * v12);
          if ( (int)result < 0 )
            return result;
          if ( ++v12 >= a3 )
            break;
          v11 = v14;
        }
      }
      *v9 = v12;
    }
    else
    {
      return 2147483659LL;
    }
  }
  return result;
}
