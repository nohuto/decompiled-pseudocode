/*
 * XREFs of WPP_RECORDER_SF_qLLL @ 0x1C00092F0
 * Callers:
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C0008D48 (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     ESM_FindAndSetTargetState @ 0x1C0009140 (ESM_FindAndSetTargetState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLLL @ 0x1C00092F0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00092F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00092F0: mov     [rsp+arg_0], rbx
 * 00000001C00092F5: mov     [rsp+arg_8], rbp
 * 00000001C00092FA: push    rdi
 * 00000001C00092FB: sub     rsp, 70h
 * 00000001C00092FF: mov     rbx, rcx
 * 00000001C0009302: mov     edi, 4
 * 00000001C0009307: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000930E: lea     ebp, [rdi+8]
 * 00000001C0009311: test    dword ptr [rcx+2Ch], 10000h
 * 00000001C0009318: jnz     loc_1C0024C9C
 * 00000001C000931E: and     [rsp+78h+var_10], 0
 * 00000001C0009324: lea     rax, [rsp+78h+arg_40]
 * 00000001C000932C: mov     [rsp+78h+var_18], rdi
 * 00000001C0009331: lea     r9, WPP_98a83f24598b3525d75ef9dd6ca2eaeb_Traceguids
 * 00000001C0009338: mov     [rsp+78h+var_20], rax
 * 00000001C000933D: mov     r8d, 11h
 * 00000001C0009343: mov     [rsp+78h+var_28], rdi
 * 00000001C0009348: lea     rax, [rsp+78h+arg_38]
 * 00000001C0009350: mov     [rsp+78h+var_30], rax
 * 00000001C0009355: mov     edx, edi
 * 00000001C0009357: mov     [rsp+78h+var_38], rdi
 * 00000001C000935C: lea     rax, [rsp+78h+arg_30]
 * 00000001C0009364: mov     [rsp+78h+var_40], rax
 * 00000001C0009369: mov     rcx, rbx
 * 00000001C000936C: lea     rax, [rsp+78h+arg_28]
 * 00000001C0009374: mov     [rsp+78h+var_48], 8
 * 00000001C000937D: mov     [rsp+78h+var_50], rax
 * 00000001C0009382: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C0009387: call    cs:__imp_WppAutoLogTrace
 * 00000001C000938E: nop     dword ptr [rax+rax+00h]
 * 00000001C0009393: lea     r11, [rsp+78h+var_8]
 * 00000001C0009398: mov     rbx, [r11+10h]
 * 00000001C000939C: mov     rbp, [r11+18h]
 * 00000001C00093A0: mov     rsp, r11
 * 00000001C00093A3: pop     rdi
 * 00000001C00093A4: retn
 * 00000001C0024C9C: cmp     [rcx+29h], dil
 * 00000001C0024CA0: jb      loc_1C000931E
 * 00000001C0024CA6: and     [rsp+78h+var_18], 0
 * 00000001C0024CAC: lea     rdx, [rsp+78h+arg_40]
 * 00000001C0024CB4: mov     rax, cs:WPP_MAIN_CB.Reserved
 * 00000001C0024CBB: lea     r8, WPP_98a83f24598b3525d75ef9dd6ca2eaeb_Traceguids
 * 00000001C0024CC2: mov     rcx, [rcx+18h]
 * 00000001C0024CC6: mov     [rsp+78h+var_20], rdi
 * 00000001C0024CCB: mov     [rsp+78h+var_28], rdx
 * 00000001C0024CD0: lea     rdx, [rsp+78h+arg_38]
 * 00000001C0024CD8: mov     [rsp+78h+var_30], rdi
 * 00000001C0024CDD: mov     [rsp+78h+var_38], rdx
 * 00000001C0024CE2: lea     rdx, [rsp+78h+arg_30]
 * 00000001C0024CEA: mov     [rsp+78h+var_40], rdi
 * 00000001C0024CEF: mov     [rsp+78h+var_48], rdx
 * 00000001C0024CF4: lea     rdx, [rsp+78h+arg_28]
 * 00000001C0024CFC: mov     [rsp+78h+var_50], 8
 * 00000001C0024D05: mov     [rsp+78h+var_58], rdx
 * 00000001C0024D0A: mov     edx, 2Bh ; '+'
 * 00000001C0024D0F: movzx   r9d, bp
 * 00000001C0024D13: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0024D19: nop
 * 00000001C0024D1A: jmp     loc_1C000931E
 */
