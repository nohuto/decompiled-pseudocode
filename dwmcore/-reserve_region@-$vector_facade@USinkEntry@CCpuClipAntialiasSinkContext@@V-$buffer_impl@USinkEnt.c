/*
 * XREFs of ?reserve_region@?$vector_facade@USinkEntry@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkEntry@CCpuClipAntialiasSinkContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSinkEntry@CCpuClipAntialiasSinkContext@@_K0@Z @ 0x1800B1030
 * Callers:
 *     ?PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z @ 0x1800B0F0C (-PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x180044B80 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ??$destruct_range@USinkEntry@CCpuClipAntialiasSinkContext@@@detail@@YAXPEAUSinkEntry@CCpuClipAntialiasSinkContext@@0@Z @ 0x1801FB19C (--$destruct_range@USinkEntry@CCpuClipAntialiasSinkContext@@@detail@@YAXPEAUSinkEntry@CCpuClipAnt.c)
 *     ??$move_backward@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x1801FB724 (--$move_backward@V-$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V-$checked_a.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x1801FBB78 (--$uninitialized_move@V-$move_iterator@PEAUSinkEntry@CCpuClipAntialiasSinkContext@@@std@@V-$chec.c)
 *     ??0SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@$$QEAU01@@Z @ 0x1801FBC5C (--0SinkEntry@CCpuClipAntialiasSinkContext@@QEAA@$$QEAU01@@Z.c)
 *     ??_GSinkEntry@CCpuClipAntialiasSinkContext@@QEAAPEAXI@Z @ 0x1801FBF04 (--_GSinkEntry@CCpuClipAntialiasSinkContext@@QEAAPEAXI@Z.c)
 */

CCpuClipAntialiasSinkContext::SinkEntry *__fastcall detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::reserve_region(
        CCpuClipAntialiasSinkContext::SinkEntry **a1,
        __int64 a2)
{
  __int64 v2; // rsi
  CCpuClipAntialiasSinkContext::SinkEntry *v4; // rdx
  __int64 v6; // rcx
  CCpuClipAntialiasSinkContext::SinkEntry *v7; // rdi
  signed __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // r15
  CCpuClipAntialiasSinkContext::SinkEntry *v14; // rsi
  CCpuClipAntialiasSinkContext::SinkEntry *v15; // rdi
  CCpuClipAntialiasSinkContext::SinkEntry *i; // rbx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rdi
  CCpuClipAntialiasSinkContext::SinkEntry *v21; // rax
  CCpuClipAntialiasSinkContext::SinkEntry *v22; // r8
  CCpuClipAntialiasSinkContext::SinkEntry *v23; // rdx
  CCpuClipAntialiasSinkContext::SinkEntry *v24; // rbx
  CCpuClipAntialiasSinkContext::SinkEntry *v25; // rcx
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // rsi
  CCpuClipAntialiasSinkContext::SinkEntry *v29; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-60h]
  signed __int64 v31; // [rsp+30h] [rbp-58h]
  _BYTE v32[32]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v33; // [rsp+A0h] [rbp+18h]

  v2 = (__int64)a1[1];
  v4 = a1[2];
  v6 = 1LL;
  if ( !(0x84BDA12F684BDA13uLL * (((__int64)v4 - v2) >> 4)) )
  {
    v18 = 0x84BDA12F684BDA13uLL * ((v2 - (__int64)*a1) >> 4);
    v19 = v18 + 1;
    if ( v18 + 1 < v18 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v20 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)v6,
            0x84BDA12F684BDA13uLL * ((v4 - *a1) >> 4),
            v19);
    v21 = (CCpuClipAntialiasSinkContext::SinkEntry *)operator new(saturated_mul(v20, 0x1B0uLL));
    v22 = a1[1];
    v23 = *a1;
    v29 = v21;
    v31 = 0LL;
    v24 = v21;
    v30 = v18;
    ((void (__fastcall *)(_BYTE *, CCpuClipAntialiasSinkContext::SinkEntry *, CCpuClipAntialiasSinkContext::SinkEntry *, CCpuClipAntialiasSinkContext::SinkEntry **))std::uninitialized_move<std::move_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>>)(
      v32,
      v23,
      v22,
      &v29);
    detail::destruct_range<CCpuClipAntialiasSinkContext::SinkEntry>(*a1);
    v25 = *a1;
    v26 = *a1 == (CCpuClipAntialiasSinkContext::SinkEntry *)(a1 + 3);
    *a1 = v24;
    if ( v26 )
      v25 = 0LL;
    operator delete(v25);
    v2 = (__int64)*a1 + 432 * v18;
    a1[1] = (CCpuClipAntialiasSinkContext::SinkEntry *)v2;
    a1[2] = (CCpuClipAntialiasSinkContext::SinkEntry *)((char *)*a1 + 432 * v20);
  }
  v7 = *a1;
  v8 = 0x84BDA12F684BDA13uLL * ((v2 - (__int64)*a1) >> 4);
  v9 = v8 - a2;
  v10 = (unsigned __int64)*a1 + 16 * ((v2 - (__int64)*a1) >> 4);
  if ( !v10 )
    goto LABEL_21;
  v11 = 0x84BDA12F684BDA13uLL * ((v2 - (__int64)*a1) >> 4) - a2;
  if ( v9 > 1 )
    v11 = 1LL;
  v12 = v2 - 432 * v11;
  if ( v2 != v12 )
  {
    v27 = 0LL;
    v28 = v2 - 432;
    v33 = 0LL;
    while ( 1 )
    {
      CCpuClipAntialiasSinkContext::SinkEntry::SinkEntry(v10 + 432 * v27, v28);
      if ( v28 == v12 )
        break;
      v28 -= 432LL;
      if ( v33 )
      {
        v27 = v33 - 1;
        v33 = v27;
        if ( !v27 )
          continue;
      }
      goto LABEL_21;
    }
  }
  if ( v9 <= 1 )
  {
    v13 = 432 * a2;
    goto LABEL_8;
  }
  if ( v8 && (!v7 || v8 < 0) )
LABEL_21:
    _invalid_parameter_noinfo_noreturn();
  v13 = 432 * a2;
  v29 = v7;
  v30 = v8;
  v31 = v8;
  ((void (__fastcall *)(_BYTE *, char *, char *, CCpuClipAntialiasSinkContext::SinkEntry **))std::move_backward<std::move_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkEntry *>>)(
    v32,
    (char *)v7 + 432 * a2,
    (char *)v7 + 432 * v8 - 432,
    &v29);
LABEL_8:
  v14 = (CCpuClipAntialiasSinkContext::SinkEntry *)((char *)v7 + 432 * a2 + 432);
  if ( v10 < (unsigned __int64)v14 )
    v14 = (CCpuClipAntialiasSinkContext::SinkEntry *)v10;
  v15 = (CCpuClipAntialiasSinkContext::SinkEntry *)((char *)v7 + v13);
  for ( i = v15; i != v14; i = (CCpuClipAntialiasSinkContext::SinkEntry *)((char *)i + 432) )
    CCpuClipAntialiasSinkContext::SinkEntry::`scalar deleting destructor'(i, (unsigned int)v4);
  a1[1] = (CCpuClipAntialiasSinkContext::SinkEntry *)((char *)a1[1] + 432);
  return v15;
}
