/*
 * XREFs of ?NotifyTransparencyApplied@EyeControlApp@@QEAAXH@Z @ 0x1804E9684
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_152c77e1cbccb2a599dea1ca043f273b___::Invoke @ 0x1803DF6B0 (CAsyncCallbackWithLambda__lambda_152c77e1cbccb2a599dea1ca043f273b___--Invoke.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?NotifyTransparencyApplied@EyeControlApp@@QEAAXH@Z @ 0x1804E9684
 * Reason: Hex-Rays returned no pseudocode for 0x1804E9684
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001804E9684: sub     rsp, 48h
 * 00000001804E9688: mov     rax, [rcx+30h]
 * 00000001804E968C: xor     r8d, r8d
 * 00000001804E968F: test    rax, rax
 * 00000001804E9692: jz      short loc_1804E96D7
 * 00000001804E9694: mov     rcx, [rcx+10h]
 * 00000001804E9698: test    edx, edx
 * 00000001804E969A: mov     [rsp+48h+arg_0], rax
 * 00000001804E969F: lea     edx, [r8+2]
 * 00000001804E96A3: mov     eax, r8d
 * 00000001804E96A6: movzx   r9d, r8w
 * 00000001804E96AA: setnz   al
 * 00000001804E96AD: lea     r8d, [rdx-1]
 * 00000001804E96B1: mov     [rsp+48h+var_18], eax
 * 00000001804E96B5: lea     rax, unk_180569426
 * 00000001804E96BC: mov     [rsp+48h+var_20], rax
 * 00000001804E96C1: mov     [rsp+48h+var_28], dx
 * 00000001804E96C6: lea     rdx, [rsp+48h+arg_0]
 * 00000001804E96CB: call    cs:__imp_CoreUICallSend
 * 00000001804E96D2: nop     dword ptr [rax+rax+00h]
 * 00000001804E96D7: add     rsp, 48h
 * 00000001804E96DB: retn
 */
