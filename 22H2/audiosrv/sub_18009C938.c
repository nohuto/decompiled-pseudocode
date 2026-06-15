/*
 * XREFs of sub_18009C938 @ 0x18009C938
 * Callers:
 *     <none>
 * Callees:
 *     sub_180004620 @ 0x180004620 (sub_180004620.c)
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

/*
 * Hex-Rays decompilation failed for sub_18009C938 @ 0x18009C938
 * Reason: Hex-Rays returned no pseudocode for 0x18009C938
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018009C938: mov     ebx, [rsp+arg_48]
 * 000000018009C93C: xor     r14d, r14d
 * 000000018009C93F: test    ebx, ebx
 * 000000018009C941: jns     short loc_18009C965
 * 000000018009C943: mov     rcx, [rsp+arg_C0]
 * 000000018009C94B: mov     r9d, ebx
 * 000000018009C94E: lea     r8, aAvcoreAudiocor_12; "avcore\\audiocore\\server\\audiosrv\\dl"...
 * 000000018009C955: mov     edx, 0DE6h
 * 000000018009C95A: call    sub_18004BD84
 * 000000018009C95F: nop
 * 000000018009C960: jmp     loc_18009C893
 * 000000018009C965: mov     rsi, [rsp+arg_C8]
 * 000000018009C96D: mov     r12, [rsp+arg_D0]
 * 000000018009C975: mov     r15b, [rsp+arg_60]
 * 000000018009C97A: mov     rbx, [rsp+arg_58]
 * 000000018009C97F: mov     r13d, [rsp+arg_40]
 * 000000018009C984: mov     [rsp+hKey], r14
 * 000000018009C989: lea     rax, [rsp+hKey]
 * 000000018009C98E: mov     [rsp+phkResult], rax; phkResult
 * 000000018009C993: mov     r9d, 20019h; samDesired
 * 000000018009C999: xor     r8d, r8d; ulOptions
 * 000000018009C99C: mov     rdi, [rsp+lpSubKey]
 * 000000018009C9A1: mov     rdx, rdi; lpSubKey
 * 000000018009C9A4: mov     rcx, [rsi+40h]; hKey
 * 000000018009C9A8: call    cs:RegOpenKeyExW
 * 000000018009C9AF: nop     dword ptr [rax+rax+00h]
 * 000000018009C9B4: mov     rcx, [rsp+hKey]; hKey
 * 000000018009C9B9: test    eax, eax
 * 000000018009C9BB: jnz     short loc_18009C9E0
 * 000000018009C9BD: test    rcx, rcx
 * 000000018009C9C0: jz      short loc_18009C9CF
 * 000000018009C9C2: call    cs:RegCloseKey
 * 000000018009C9C9: nop     dword ptr [rax+rax+00h]
 * 000000018009C9CE: nop
 * 000000018009C9CF: lea     rcx, [rdi-18h]
 * 000000018009C9D3: call    sub_180006A30
 * 000000018009C9D8: inc     r13d
 * 000000018009C9DB: jmp     loc_18009C902
 * 000000018009C9E0: test    rcx, rcx
 * 000000018009C9E3: jz      short loc_18009C9F2
 * 000000018009C9E5: call    cs:RegCloseKey
 * 000000018009C9EC: nop     dword ptr [rax+rax+00h]
 * 000000018009C9F1: nop
 * 000000018009C9F2: mov     [rsp+arg_C8], r14
 * 000000018009C9FA: lea     r9, [rsp+arg_C8]
 * 000000018009CA02: mov     r8d, 2001Fh
 * 000000018009CA08: mov     rdx, rdi; int
 * 000000018009CA0B: mov     rcx, [rsi+40h]; int
 * 000000018009CA0F: call    sub_180004620
 * 000000018009CA14: mov     r13d, eax
 * 000000018009CA17: test    eax, eax
 * 000000018009CA19: jns     short loc_18009CA7F
 * 000000018009CA1B: mov     rcx, [rsp+arg_C0]
 * 000000018009CA23: mov     r9d, eax
 * 000000018009CA26: lea     r8, aAvcoreAudiocor_12; "avcore\\audiocore\\server\\audiosrv\\dl"...
 * 000000018009CA2D: mov     edx, 0DF3h
 * 000000018009CA32: call    sub_18004BD84
 * 000000018009CA37: nop
 * 000000018009CA38: mov     rcx, [rsp+arg_C8]
 * 000000018009CA40: test    rcx, rcx
 * 000000018009CA43: jnz     short loc_18009CA4A
 * 000000018009CA45: jmp     short loc_18009CA57
 * 000000018009CA47: mov     rcx, rsi; hKey
 * 000000018009CA4A: call    cs:RegCloseKey
 * 000000018009CA51: nop     dword ptr [rax+rax+00h]
 * 000000018009CA56: nop
 * 000000018009CA57: lea     rcx, [rdi-18h]
 * 000000018009CA5B: call    sub_180006A30
 * 000000018009CA60: nop
 * 000000018009CA61: test    r15b, r15b
 * 000000018009CA64: jz      short loc_18009CA77
 * 000000018009CA66: cmp     [rbx], r14d
 * 000000018009CA69: jnz     short loc_18009CA77
 * 000000018009CA6B: call    cs:RpcRevertToSelf
 * 000000018009CA72: nop     dword ptr [rax+rax+00h]
 * 000000018009CA77: mov     eax, r13d
 * 000000018009CA7A: jmp     loc_180051DCE
 * 000000018009CA7F: mov     rcx, [rsi+30h]
 * 000000018009CA83: or      rax, 0FFFFFFFFFFFFFFFFh
 * 000000018009CA87: inc     rax
 * 000000018009CA8A: cmp     [rcx+rax*2], r14w
 * 000000018009CA8F: jnz     short loc_18009CA87
 * 000000018009CA91: lea     eax, ds:2[rax*2]
 * 000000018009CA98: mov     [rsp+cbData], eax; cbData
 * 000000018009CA9C: mov     [rsp+phkResult], rcx; lpData
 * 000000018009CAA1: mov     r9d, 1; dwType
 * 000000018009CAA7: xor     r8d, r8d; Reserved
 * 000000018009CAAA: xor     edx, edx; lpValueName
 * 000000018009CAAC: mov     rsi, [rsp+arg_C8]
 * 000000018009CAB4: mov     rcx, rsi; hKey
 * 000000018009CAB7: call    cs:RegSetValueExW
 * 000000018009CABE: nop     dword ptr [rax+rax+00h]
 * 000000018009CAC3: mov     r13d, eax
 * 000000018009CAC6: test    eax, eax
 * 000000018009CAC8: jns     short loc_18009CAF5
 * 000000018009CACA: mov     rcx, [rsp+arg_C0]
 * 000000018009CAD2: mov     r9d, eax
 * 000000018009CAD5: lea     r8, aAvcoreAudiocor_12; "avcore\\audiocore\\server\\audiosrv\\dl"...
 * 000000018009CADC: mov     edx, 0DF7h
 * 000000018009CAE1: call    sub_18004BD84
 * 000000018009CAE6: nop
 * 000000018009CAE7: test    rsi, rsi
 * 000000018009CAEA: jz      loc_18009CA57
 * 000000018009CAF0: jmp     loc_18009CA47
 * 000000018009CAF5: mov     [r12], rsi
 * 000000018009CAF9: jmp     loc_180051DAC
 */
