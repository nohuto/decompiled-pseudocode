/*
 * XREFs of ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x180093240
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800561B8 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAX_K0@Z @ 0x18009331C (-clear_region@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@de.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x180093398 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x18009347C (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ @ 0x1800934B4 (-size@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800E1B00 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020F8B4 (ModuleFailFastForHRESULT.c)
 */

/*
 * Hex-Rays decompilation failed for ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x180093240
 * Reason: Hex-Rays returned no pseudocode for 0x180093240
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180093240: mov     [rsp+arg_8], rbx
 * 0000000180093245: mov     [rsp+arg_10], rbp
 * 000000018009324A: mov     [rsp+arg_18], rsi
 * 000000018009324F: push    rdi
 * 0000000180093250: sub     rsp, 20h
 * 0000000180093254: lea     rax, ??_7CDrawListCache@@6B@; const CDrawListCache::`vftable'
 * 000000018009325B: mov     ebp, edx
 * 000000018009325D: mov     [rcx], rax
 * 0000000180093260: mov     rdi, rcx
 * 0000000180093263: call    ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ; CDrawListCache::ReleaseDrawListEntries(void)
 * 0000000180093268: lea     rsi, [rdi+20h]
 * 000000018009326C: mov     rcx, rsi
 * 000000018009326F: call    ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ; detail::pointer_buffer_impl<CDrawListEntry *>::size(void)
 * 0000000180093274: mov     rcx, rsi
 * 0000000180093277: mov     rbx, rax
 * 000000018009327A: call    ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ; detail::pointer_buffer_impl<CDrawListEntry *>::first(void)
 * 000000018009327F: mov     rcx, rsi
 * 0000000180093282: lea     rbx, [rax+rbx*8]
 * 0000000180093286: call    ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ; detail::pointer_buffer_impl<CDrawListEntry *>::first(void)
 * 000000018009328B: sub     rbx, rax
 * 000000018009328E: sar     rbx, 3
 * 0000000180093292: test    rbx, rbx
 * 0000000180093295: jnz     loc_180127802
 * 000000018009329B: mov     al, [rsi]
 * 000000018009329D: and     al, 3
 * 000000018009329F: cmp     al, 1
 * 00000001800932A1: jz      short loc_180093303
 * 00000001800932A3: test    bpl, 1
 * 00000001800932A7: jz      short loc_1800932E0
 * 00000001800932A9: test    bpl, 4
 * 00000001800932AD: jnz     loc_180127820
 * 00000001800932B3: lea     rcx, [rsp+28h+arg_0]; struct CThreadContext **
 * 00000001800932B8: call    ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z; CThreadContext::GetCurrent(CThreadContext * *)
 * 00000001800932BD: test    eax, eax
 * 00000001800932BF: js      loc_180127813
 * 00000001800932C5: mov     rcx, [rsp+28h+arg_0]
 * 00000001800932CA: mov     eax, [rcx+38h]
 * 00000001800932CD: cmp     [rcx+3Ch], eax
 * 00000001800932D0: jnb     short loc_1800932F9
 * 00000001800932D2: mov     rax, [rcx+40h]
 * 00000001800932D6: mov     [rdi], rax
 * 00000001800932D9: inc     dword ptr [rcx+3Ch]
 * 00000001800932DC: mov     [rcx+40h], rdi
 * 00000001800932E0: mov     rbx, [rsp+28h+arg_8]
 * 00000001800932E5: mov     rax, rdi
 * 00000001800932E8: mov     rbp, [rsp+28h+arg_10]
 * 00000001800932ED: mov     rsi, [rsp+28h+arg_18]
 * 00000001800932F2: add     rsp, 20h
 * 00000001800932F6: pop     rdi
 * 00000001800932F7: retn
 * 00000001800932F9: mov     rcx, rdi; lpMem
 * 00000001800932FC: call    ??3@YAXPEAX@Z; operator delete(void *)
 * 0000000180093301: jmp     short loc_1800932E0
 * 0000000180093303: mov     rcx, rsi
 * 0000000180093306: call    ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ; detail::pointer_buffer_impl<CDrawListEntry *>::first(void)
 * 000000018009330B: lea     rcx, [rax-10h]; lpMem
 * 000000018009330F: call    ??3@YAXPEAX@Z; operator delete(void *)
 * 0000000180093314: jmp     short loc_1800932A3
 * 0000000180127802: mov     r8, rbx
 * 0000000180127805: mov     rcx, rsi
 * 0000000180127808: call    ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAX_K0@Z; detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::clear_region(unsigned __int64,unsigned __int64)
 * 000000018012780D: nop
 * 000000018012780E: jmp     loc_18009329B
 * 0000000180127813: mov     rdx, [rsp+28h]
 * 0000000180127818: mov     ecx, eax
 * 000000018012781A: call    ModuleFailFastForHRESULT
 * 0000000180127820: mov     edx, 68h ; 'h'; struct D2D1_BEZIER_SEGMENT *
 * 0000000180127825: mov     rcx, rdi; this
 * 0000000180127828: call    ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z; CDrawListPolygonBuilder::AddBeziers(D2D1_BEZIER_SEGMENT const *,uint)
 * 000000018012782D: nop
 * 000000018012782E: jmp     loc_1800932E0
 */
