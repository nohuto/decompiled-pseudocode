/*
 * XREFs of ?NotifyTransparencyApplied@EyeControlApp@@QEAAXH@Z @ 0x1804E9A14
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_152c77e1cbccb2a599dea1ca043f273b___::Invoke @ 0x1803DF980 (CAsyncCallbackWithLambda__lambda_152c77e1cbccb2a599dea1ca043f273b___--Invoke.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?NotifyTransparencyApplied@EyeControlApp@@QEAAXH@Z @ 0x1804E9A14
 * Reason: Hex-Rays returned no pseudocode for 0x1804E9A14
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001804E9A14: sub     rsp, 48h
 * 00000001804E9A18: mov     rax, [rcx+30h]
 * 00000001804E9A1C: xor     r8d, r8d
 * 00000001804E9A1F: test    rax, rax
 * 00000001804E9A22: jz      short loc_1804E9A67
 * 00000001804E9A24: mov     rcx, [rcx+10h]
 * 00000001804E9A28: test    edx, edx
 * 00000001804E9A2A: mov     [rsp+48h+arg_0], rax
 * 00000001804E9A2F: lea     edx, [r8+2]
 * 00000001804E9A33: mov     eax, r8d
 * 00000001804E9A36: movzx   r9d, r8w
 * 00000001804E9A3A: setnz   al
 * 00000001804E9A3D: lea     r8d, [rdx-1]
 * 00000001804E9A41: mov     [rsp+48h+var_18], eax
 * 00000001804E9A45: lea     rax, unk_1805694A6
 * 00000001804E9A4C: mov     [rsp+48h+var_20], rax
 * 00000001804E9A51: mov     [rsp+48h+var_28], dx
 * 00000001804E9A56: lea     rdx, [rsp+48h+arg_0]
 * 00000001804E9A5B: call    cs:__imp_CoreUICallSend
 * 00000001804E9A62: nop     dword ptr [rax+rax+00h]
 * 00000001804E9A67: add     rsp, 48h
 * 00000001804E9A6B: retn
 */
