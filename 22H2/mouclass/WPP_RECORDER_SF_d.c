/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0005804
 * Callers:
 *     MouConfiguration @ 0x1C000F080 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002A40 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C0005804
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005804
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005804: mov     r11, rsp
 * 00000001C0005807: mov     [r11+8], rbx
 * 00000001C000580B: push    rsi
 * 00000001C000580C: sub     rsp, 40h
 * 00000001C0005810: mov     rbx, rcx
 * 00000001C0005813: mov     esi, 42h ; 'B'
 * 00000001C0005818: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000581F: mov     eax, [rcx+2Ch]
 * 00000001C0005822: test    al, 1
 * 00000001C0005824: jz      short loc_1C0005860
 * 00000001C0005826: cmp     byte ptr [rcx+29h], 4
 * 00000001C000582A: jb      short loc_1C0005860
 * 00000001C000582C: and     qword ptr [r11-18h], 0
 * 00000001C0005831: lea     rdx, [r11+30h]
 * 00000001C0005835: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000583C: lea     r8, WPP_5c6cc7617d423be8e14292e2367026fe_Traceguids
 * 00000001C0005843: mov     rcx, [rcx+18h]
 * 00000001C0005847: mov     qword ptr [r11-20h], 4
 * 00000001C000584F: mov     [r11-28h], rdx
 * 00000001C0005853: lea     edx, [rsi-17h]
 * 00000001C0005856: movzx   r9d, si
 * 00000001C000585A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0005860: and     [rsp+48h+var_10], 0
 * 00000001C0005866: lea     rax, [rsp+48h+arg_28]
 * 00000001C000586B: mov     edx, 4
 * 00000001C0005870: mov     [rsp+48h+var_18], 4
 * 00000001C0005879: mov     [rsp+48h+var_20], rax
 * 00000001C000587E: lea     r9, WPP_5c6cc7617d423be8e14292e2367026fe_Traceguids
 * 00000001C0005885: mov     rcx, rbx
 * 00000001C0005888: mov     [rsp+48h+var_28], si
 * 00000001C000588D: lea     r8d, [rdx-3]
 * 00000001C0005891: call    cs:__imp_WppAutoLogTrace
 * 00000001C0005898: nop     dword ptr [rax+rax+00h]
 * 00000001C000589D: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00058A2: add     rsp, 40h
 * 00000001C00058A6: pop     rsi
 * 00000001C00058A7: retn
 */
