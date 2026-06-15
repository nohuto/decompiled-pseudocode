/*
 * XREFs of sub_1800B54B0 @ 0x1800B54B0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180074427 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B54B0(_WORD *a1, __int64 a2, _BYTE *a3)
{
  __int64 result; // rax
  const wil::ResultException *v7; // rbx
  __int64 *v8; // rbp
  int v9; // eax
  const wil::ResultException *v10; // rbx
  __int64 *v11; // rdx
  __int64 v12; // [rsp+0h] [rbp-68h] BYREF
  const wil::ResultException *v13; // [rsp+20h] [rbp-48h] BYREF
  const std::bad_alloc *v14; // [rsp+28h] [rbp-40h] BYREF
  const wil::ResultException *v15; // [rsp+30h] [rbp-38h] BYREF
  const std::bad_alloc *v16; // [rsp+38h] [rbp-30h] BYREF
  std::exception *v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+70h] [rbp+8h]
  _WORD *v19; // [rsp+70h] [rbp+8h]
  char *v20; // [rsp+70h] [rbp+8h]
  _WORD *v21; // [rsp+70h] [rbp+8h]
  char *v22; // [rsp+70h] [rbp+8h]
  char *v23; // [rsp+70h] [rbp+8h]
  __int64 v24; // [rsp+78h] [rbp+10h]
  __int64 v25; // [rsp+78h] [rbp+10h]
  __int64 v26; // [rsp+78h] [rbp+10h]
  __int64 v27; // [rsp+78h] [rbp+10h]
  __int64 v28; // [rsp+78h] [rbp+10h]
  _BYTE *v29; // [rsp+80h] [rbp+18h]
  _BYTE *v30; // [rsp+80h] [rbp+18h]

  if ( a1 )
    *a1 = 0;
  *a3 = 0;
  if ( !qword_18019F9D8 || (result = qword_18019F9D8(), (int)result >= 0) )
  {
    if ( !qword_18019F9F8 )
    {
      if ( qword_18019F9C8 )
      {
        try
        {
          throw;
        }
        catch ( const wil::ResultException *v13 )
        {
          *v29 = 1;
          v7 = v13;
          sub_1800B5130((__int64)v13, v19, v24);
          return *((unsigned int *)v7 + 7);
        }
        catch ( const std::bad_alloc *v14 )
        {
          sub_1800B515C((__int64)v14, v20, v25);
          return 2147942414LL;
        }
        catch ( ... )
        {
          v11 = &v12;
          v8 = v11;
          v9 = sub_1800B51E8(v11[14]);
          *((_DWORD *)v8 + 28) = v9;
          if ( v9 < 0 )
            return (unsigned int)v18;
          return 0LL;
        }
      }
      try
      {
        throw;
      }
      catch ( const wil::ResultException *v15 )
      {
        *v30 = 1;
        v10 = v15;
        sub_1800B5130((__int64)v15, v21, v26);
        return *((unsigned int *)v10 + 7);
      }
      catch ( const std::bad_alloc *v16 )
      {
        sub_1800B515C((__int64)v16, v22, v27);
        return 2147942414LL;
      }
      catch ( std::exception *v17 )
      {
        sub_1800B515C((__int64)v17, v23, v28);
        return 2147942974LL;
      }
      catch ( ... )
      {
        return 0LL;
      }
    }
    return qword_18019F9F8(a1, a2, a3);
  }
  return result;
}
