/*
 * XREFs of _lambda_57bd800a23f6990551f71dd05caf20c5_::operator() @ 0x180084510
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_57bd800a23f6990551f71dd05caf20c5___::Run @ 0x180084500 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_57bd800a23f6990551f71dd05caf20c5___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x1801D1740 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x1801D1854 (McTemplateU0q_EventWriteTransfer.c)
 */

/*
 * Hex-Rays decompilation failed for _lambda_57bd800a23f6990551f71dd05caf20c5_::operator() @ 0x180084510
 * Reason: Hex-Rays returned no pseudocode for 0x180084510
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180084510: mov     [rsp+arg_10], rbx
 * 0000000180084515: push    rdi
 * 0000000180084516: sub     rsp, 30h
 * 000000018008451A: mov     rax, [rcx]
 * 000000018008451D: mov     rbx, [rax+8]
 * 0000000180084521: mov     rcx, [rbx+8]
 * 0000000180084525: test    rcx, rcx
 * 0000000180084528: jz      loc_1800845EE
 * 000000018008452E: mov     rax, [rcx]
 * 0000000180084531: lea     rdx, [rsp+38h+arg_0]
 * 0000000180084536: mov     rax, [rax+18h]
 * 000000018008453A: call    cs:__guard_dispatch_icall_fptr
 * 0000000180084540: test    eax, eax
 * 0000000180084542: js      loc_1800845EE
 * 0000000180084548: test    byte ptr cs:Microsoft_Windows_Immersive_ShellEnableBits, 8
 * 000000018008454F: jnz     loc_1801A23BE
 * 0000000180084555: xor     edi, edi
 * 0000000180084557: cmp     [rsp+38h+arg_0], edi
 * 000000018008455B: jbe     loc_1800845E1
 * 0000000180084561: and     [rsp+38h+arg_8], 0
 * 0000000180084567: mov     rcx, [rbx+8]
 * 000000018008456B: mov     rax, [rcx]
 * 000000018008456E: lea     r9, [rsp+38h+arg_8]
 * 0000000180084573: lea     r8, _GUID_0c40987c_7026_499e_adad_c164c0ffee84
 * 000000018008457A: mov     edx, edi
 * 000000018008457C: mov     rax, [rax+20h]
 * 0000000180084580: call    cs:__guard_dispatch_icall_fptr
 * 0000000180084586: test    eax, eax
 * 0000000180084588: js      short loc_1800845BC
 * 000000018008458A: test    byte ptr cs:Microsoft_Windows_Immersive_ShellEnableBits, 8
 * 0000000180084591: jnz     loc_1801A23D7
 * 0000000180084597: mov     rcx, [rsp+38h+arg_8]
 * 000000018008459C: mov     rax, [rcx]
 * 000000018008459F: mov     r8d, [rbx]
 * 00000001800845A2: mov     edx, [rbx+4]
 * 00000001800845A5: mov     rax, [rax+18h]
 * 00000001800845A9: call    cs:__guard_dispatch_icall_fptr
 * 00000001800845AF: test    byte ptr cs:Microsoft_Windows_Immersive_ShellEnableBits, 8
 * 00000001800845B6: jnz     loc_1801A23EC
 * 00000001800845BC: mov     rcx, [rsp+38h+arg_8]
 * 00000001800845C1: test    rcx, rcx
 * 00000001800845C4: jz      short loc_1800845D9
 * 00000001800845C6: and     [rsp+38h+arg_8], 0
 * 00000001800845CC: mov     rax, [rcx]
 * 00000001800845CF: mov     rax, [rax+10h]
 * 00000001800845D3: call    cs:__guard_dispatch_icall_fptr
 * 00000001800845D9: inc     edi
 * 00000001800845DB: cmp     edi, [rsp+38h+arg_0]
 * 00000001800845DF: jb      short loc_180084561
 * 00000001800845E1: test    byte ptr cs:Microsoft_Windows_Immersive_ShellEnableBits, 8
 * 00000001800845E8: jnz     loc_1801A2404
 * 00000001800845EE: mov     rbx, [rsp+38h+arg_10]
 * 00000001800845F3: add     rsp, 30h
 * 00000001800845F7: pop     rdi
 * 00000001800845F8: retn
 * 00000001801A23BE: mov     r9d, [rbx]
 * 00000001801A23C1: mov     r8d, [rbx+4]
 * 00000001801A23C5: lea     rdx, ImmersiveShell_AppManager_ZbandChange_Start; "{"
 * 00000001801A23CC: call    McTemplateU0qq_EventWriteTransfer
 * 00000001801A23D1: nop
 * 00000001801A23D2: jmp     loc_180084555
 * 00000001801A23D7: mov     r8d, edi
 * 00000001801A23DA: lea     rdx, ImmersiveShell_AppManager_ZbandChanged_Start
 * 00000001801A23E1: call    McTemplateU0q_EventWriteTransfer
 * 00000001801A23E6: nop
 * 00000001801A23E7: jmp     loc_180084597
 * 00000001801A23EC: mov     r9d, eax
 * 00000001801A23EF: mov     r8d, edi
 * 00000001801A23F2: lea     rdx, ImmersiveShell_AppManager_ZbandChanged_Stop
 * 00000001801A23F9: call    McTemplateU0qq_EventWriteTransfer
 * 00000001801A23FE: nop
 * 00000001801A23FF: jmp     loc_1800845BC
 * 00000001801A2404: mov     r9d, [rbx]
 * 00000001801A2407: mov     r8d, [rbx+4]
 * 00000001801A240B: lea     rdx, ImmersiveShell_AppManager_ZbandChange_Stop
 * 00000001801A2412: call    McTemplateU0qq_EventWriteTransfer
 * 00000001801A2417: nop
 * 00000001801A2418: jmp     loc_1800845EE
 */
