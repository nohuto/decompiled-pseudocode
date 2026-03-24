/*
 * XREFs of WPP_RECORDER_SF_diS @ 0x1C00174F8
 * Callers:
 *     Controller_PopulateDeviceFlagsFromKse @ 0x1C00170F0 (Controller_PopulateDeviceFlagsFromKse.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_diS @ 0x1C00174F8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00174F8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00174F8: mov     rax, rsp
 * 00000001C00174FB: mov     [rax+8], rbx
 * 00000001C00174FF: mov     [rax+10h], rbp
 * 00000001C0017503: mov     [rax+18h], rsi
 * 00000001C0017507: mov     [rax+20h], rdi
 * 00000001C001750B: push    r12
 * 00000001C001750D: push    r14
 * 00000001C001750F: push    r15
 * 00000001C0017511: sub     rsp, 60h
 * 00000001C0017515: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C001751C: lea     r8, aNull_1; "NULL"
 * 00000001C0017523: mov     rbx, [rsp+78h+arg_38]
 * 00000001C001752B: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C001752F: xor     r15d, r15d
 * 00000001C0017532: movzx   ebp, r9w
 * 00000001C0017536: mov     r14, rcx
 * 00000001C0017539: mov     r12d, 4
 * 00000001C001753F: mov     eax, [rdx+2Ch]
 * 00000001C0017542: lea     esi, [rdi+0Bh]
 * 00000001C0017545: test    al, 8
 * 00000001C0017547: jnz     loc_1C0028012
 * 00000001C001754D: test    rbx, rbx
 * 00000001C0017550: jz      short loc_1C0017567
 * 00000001C0017552: inc     rdi
 * 00000001C0017555: cmp     [rbx+rdi*2], r15w
 * 00000001C001755A: jnz     short loc_1C0017552
 * 00000001C001755C: lea     rsi, ds:2[rdi*2]
 * 00000001C0017564: test    rbx, rbx
 * 00000001C0017567: mov     [rsp+78h+var_20], r15
 * 00000001C001756C: lea     rax, [rsp+78h+arg_30]
 * 00000001C0017574: mov     [rsp+78h+var_28], rsi
 * 00000001C0017579: lea     r9, WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids
 * 00000001C0017580: cmovz   rbx, r8
 * 00000001C0017584: mov     edx, r12d
 * 00000001C0017587: mov     [rsp+78h+var_30], rbx
 * 00000001C001758C: mov     r8d, r12d
 * 00000001C001758F: mov     [rsp+78h+var_38], 8
 * 00000001C0017598: mov     rcx, r14
 * 00000001C001759B: mov     [rsp+78h+var_40], rax
 * 00000001C00175A0: lea     rax, [rsp+78h+arg_28]
 * 00000001C00175A8: mov     [rsp+78h+var_48], r12
 * 00000001C00175AD: mov     [rsp+78h+var_50], rax
 * 00000001C00175B2: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C00175B7: call    cs:__imp_WppAutoLogTrace
 * 00000001C00175BE: nop     dword ptr [rax+rax+00h]
 * 00000001C00175C3: lea     r11, [rsp+78h+var_18]
 * 00000001C00175C8: mov     rbx, [r11+20h]
 * 00000001C00175CC: mov     rbp, [r11+28h]
 * 00000001C00175D0: mov     rsi, [r11+30h]
 * 00000001C00175D4: mov     rdi, [r11+38h]
 * 00000001C00175D8: mov     rsp, r11
 * 00000001C00175DB: pop     r15
 * 00000001C00175DD: pop     r14
 * 00000001C00175DF: pop     r12
 * 00000001C00175E1: retn
 * 00000001C0028012: cmp     [rdx+29h], r12b
 * 00000001C0028016: jb      loc_1C001754D
 * 00000001C002801C: test    rbx, rbx
 * 00000001C002801F: jz      short loc_1C0028038
 * 00000001C0028021: mov     rax, rdi
 * 00000001C0028024: inc     rax
 * 00000001C0028027: cmp     [rbx+rax*2], r15w
 * 00000001C002802C: jnz     short loc_1C0028024
 * 00000001C002802E: lea     rdx, ds:2[rax*2]
 * 00000001C0028036: jmp     short loc_1C002803B
 * 00000001C0028038: mov     rdx, rsi
 * 00000001C002803B: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0028042: test    rbx, rbx
 * 00000001C0028045: mov     [rsp+78h+var_28], r15
 * 00000001C002804A: mov     rcx, rbx
 * 00000001C002804D: cmovz   rcx, r8
 * 00000001C0028051: mov     [rsp+78h+var_30], rdx
 * 00000001C0028056: mov     [rsp+78h+var_38], rcx
 * 00000001C002805B: lea     r8, WPP_4d8d366f5fa2386b8519f650eb4534ed_Traceguids
 * 00000001C0028062: mov     [rsp+78h+var_40], 8
 * 00000001C002806B: lea     rcx, [rsp+78h+arg_30]
 * 00000001C0028073: mov     [rsp+78h+var_48], rcx
 * 00000001C0028078: mov     r9d, ebp
 * 00000001C002807B: lea     rcx, [rsp+78h+arg_28]
 * 00000001C0028083: mov     [rsp+78h+var_50], r12
 * 00000001C0028088: mov     [rsp+78h+var_58], rcx
 * 00000001C002808D: mov     edx, 2Bh ; '+'
 * 00000001C0028092: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0028099: mov     rcx, [rcx+18h]
 * 00000001C002809D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00280A3: lea     r8, aNull_1; "NULL"
 * 00000001C00280AA: jmp     loc_1C001754D
 */
