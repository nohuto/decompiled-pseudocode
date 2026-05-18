/*
 * XREFs of sub_18000DB90 @ 0x18000DB90
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000DB90(char *a1, __int64 a2, _BYTE *a3)
{
  __int64 result; // rax
  const wil::ResultException *v7; // rbx
  _BYTE *v8; // rbp
  _WORD *v9; // rcx
  __int64 v10; // rbx
  _BYTE *v11; // rbp
  char *v12; // rbx
  _BYTE *v13; // rbp
  char *v14; // rbx
  _BYTE *v15; // rdx
  _BYTE *v16; // rdx
  _BYTE *v17; // rdx
  _BYTE v18[32]; // [rsp+0h] [rbp-68h] BYREF
  const wil::ResultException *v19; // [rsp+20h] [rbp-48h] BYREF
  const wil::ResultException *v20; // [rsp+28h] [rbp-40h] BYREF
  const std::bad_alloc *v21; // [rsp+30h] [rbp-38h] BYREF
  const std::bad_alloc *v22; // [rsp+38h] [rbp-30h] BYREF
  std::exception *v23; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v25; // [rsp+70h] [rbp+8h]
  int v26; // [rsp+70h] [rbp+8h]

  if ( a1 )
    *(_WORD *)a1 = 0;
  *a3 = 0;
  if ( !qword_1802183F8 || (result = qword_1802183F8(), (int)result >= 0) )
  {
    if ( !qword_180218408 )
    {
      if ( qword_180218360 )
        throw;
      try
      {
      }
      catch ( const wil::ResultException *v19 )
      {
        *a3 = 1;
        v7 = v19;
        if ( a1 )
          sub_18000C9AC(a1, a2, (__int64)v19 + 24);
        return *((unsigned int *)v7 + 7);
      }
      catch ( const std::bad_alloc *v21 )
      {
        if ( a1 )
        {
          (*(void (__fastcall **)(const std::bad_alloc *))(*(_QWORD *)v21 + 8LL))(v21);
          sub_18000E8F0(a1);
        }
        return 2147942414LL;
      }
      catch ( ... )
      {
        v26 = sub_18000D658((__int64)a1);
        if ( v26 < 0 )
          return (unsigned int)v26;
        return 0LL;
      }
      try
      {
        throw;
      }
      catch ( const wil::ResultException *v20 )
      {
        v15 = v18;
        v8 = v15;
        **((_BYTE **)v15 + 16) = 1;
        v9 = (_WORD *)*((_QWORD *)v15 + 14);
        v10 = *((_QWORD *)v15 + 5);
        if ( v9 )
          sub_18000C9AC(v9, *((_QWORD *)v8 + 15), v10 + 24);
        *((_DWORD *)v8 + 28) = *(_DWORD *)(v10 + 28);
        return v25;
      }
      catch ( const std::bad_alloc *v22 )
      {
        v16 = v18;
        v11 = v16;
        v12 = (char *)*((_QWORD *)v16 + 14);
        if ( v12 )
        {
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v11 + 7) + 8LL))(*((_QWORD *)v11 + 7));
          sub_18000E8F0(v12);
        }
        return 2147942414LL;
      }
      catch ( std::exception *v23 )
      {
        v17 = v18;
        v13 = v17;
        v14 = (char *)*((_QWORD *)v17 + 14);
        if ( v14 )
        {
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v13 + 8) + 8LL))(*((_QWORD *)v13 + 8));
          sub_18000E8F0(v14);
        }
        return 2147942974LL;
      }
      catch ( ... )
      {
        return 0LL;
      }
    }
    return qword_180218408(a1, a2, a3);
  }
  return result;
}
