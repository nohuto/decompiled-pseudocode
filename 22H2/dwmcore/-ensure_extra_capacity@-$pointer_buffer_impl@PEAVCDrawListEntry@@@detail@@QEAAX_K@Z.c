/*
 * XREFs of ?ensure_extra_capacity@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEAAX_K@Z @ 0x180093000
 * Callers:
 *     ?reserve_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAPEAPEAVCDrawListEntry@@_K0@Z @ 0x180092D9C (-reserve_region@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180062AA8 (--2@YAPEAX_K@Z.c)
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x18009347C (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCDrawListEntry@@@std@@V?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCDrawListEntry@@@stdext@@V?$move_iterator@PEAPEAVCDrawListEntry@@@0@0V12@@Z @ 0x1800D016C (--$uninitialized_copy@V-$move_iterator@PEAPEAVCDrawListEntry@@@std@@V-$checked_array_iterator@PE.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall detail::pointer_buffer_impl<CDrawListEntry *>::ensure_extra_capacity(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  void *v5; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // r14
  int v11; // r8d
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 result; // rax
  int v15; // r8d
  unsigned __int64 v16; // rbp
  _QWORD *v17; // rax
  unsigned __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int128 v32; // [rsp+20h] [rbp-48h] BYREF
  __int64 v33; // [rsp+30h] [rbp-38h]
  __int128 v34; // [rsp+40h] [rbp-28h] BYREF
  __int64 v35; // [rsp+50h] [rbp-18h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v4 = *a1;
  v5 = 0LL;
  v8 = *a1 & 3;
  if ( (*a1 & 3) != 0 )
  {
    if ( (_DWORD)v8 == 1 )
    {
      v9 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1, a2, v4, a4, v32, *((_QWORD *)&v32 + 1));
      v4 = *a1;
      v10 = *(_QWORD *)(v9 - 16);
    }
    else
    {
      if ( (unsigned int)(v8 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v10 = 0LL;
    }
  }
  else
  {
    v10 = 1LL;
  }
  v11 = v4 & 3;
  if ( v11 )
  {
    v12 = (unsigned int)(v11 - 1);
    if ( !(_DWORD)v12 )
    {
      v13 = *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(
                          a1,
                          a2,
                          v12,
                          a4,
                          v32,
                          *((_QWORD *)&v32 + 1))
                      - 8);
      goto LABEL_7;
    }
    v15 = v12 - 1;
    if ( !v15 )
    {
      v13 = 0LL;
      goto LABEL_7;
    }
    if ( v15 != 1 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
  }
  v13 = 1LL;
LABEL_7:
  result = v13 - v10;
  if ( result < a2 )
  {
    v16 = v10 + a2;
    if ( v16 < v10 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
    if ( v16 == 1 )
    {
      *a1 = 3LL;
    }
    else
    {
      v17 = operator new(8 * v16 + 16);
      *((_QWORD *)&v32 + 1) = v10;
      v33 = 0LL;
      v18 = (unsigned __int64)(v17 + 2);
      *v17 = 0LL;
      *(_QWORD *)&v32 = v17 + 2;
      v17[1] = 0LL;
      v22 = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1, v19, v20, v21, v32, *((_QWORD *)&v32 + 1));
      v34 = v32;
      v35 = v33;
      ((void (__fastcall *)(__int128 *, __int64, unsigned __int64, __int128 *))std::uninitialized_copy<std::move_iterator<CDrawListEntry * *>,stdext::checked_array_iterator<CDrawListEntry * *>>)(
        &v32,
        v22,
        v22 + 8 * v10,
        &v34);
      if ( (*(_DWORD *)a1 & 3) == 1 )
        v5 = (void *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(
                        a1,
                        v23,
                        v24,
                        v25,
                        v32,
                        *((_QWORD *)&v32 + 1))
                    - 16);
      *a1 = v18 | 1;
      operator delete(v5);
      *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(a1, v26, v27, v28, v32, *((_QWORD *)&v32 + 1))
                - 16) = v10;
      result = detail::pointer_buffer_impl<CDrawListEntry *>::first(a1, v29, v30, v31, v32, *((_QWORD *)&v32 + 1));
      *(_QWORD *)(result - 8) = v16;
    }
  }
  return result;
}
