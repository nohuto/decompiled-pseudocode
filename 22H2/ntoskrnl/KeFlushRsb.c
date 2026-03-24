/*
 * XREFs of KeFlushRsb @ 0x14051B158
 * Callers:
 *     MiUnloadSystemImage @ 0x1406FEA98 (MiUnloadSystemImage.c)
 * Callees:
 *     KiIpiSendPacket @ 0x140343E58 (KiIpiSendPacket.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiFlushCurrentRsb @ 0x140413380 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KeFlushRsb @ 0x14051B158
 * Reason: Hex-Rays returned no pseudocode for 0x14051B158
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014051B158: mov     [rsp+arg_0], rbx
 * 000000014051B15D: push    rdi
 * 000000014051B15E: sub     rsp, 30h
 * 000000014051B162: mov     rbx, cr8
 * 000000014051B166: mov     eax, 0Ch
 * 000000014051B16B: mov     cr8, rax
 * 000000014051B16F: mov     eax, cs:KiIrqlFlags
 * 000000014051B175: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 000000014051B179: test    eax, eax
 * 000000014051B17B: jz      short loc_14051B1B2
 * 000000014051B17D: test    al, 1
 * 000000014051B17F: jz      short loc_14051B1B2
 * 000000014051B181: cmp     bl, 0Fh
 * 000000014051B184: ja      short loc_14051B1B2
 * 000000014051B186: mov     rax, gs:20h
 * 000000014051B18F: mov     rdx, rdi
 * 000000014051B192: movzx   ecx, bl
 * 000000014051B195: inc     ecx
 * 000000014051B197: shl     rdx, cl
 * 000000014051B19A: mov     r9, [rax+84B8h]
 * 000000014051B1A1: and     edx, 1FFCh
 * 000000014051B1A7: mov     r8d, [r9+14h]
 * 000000014051B1AB: or      r8d, edx
 * 000000014051B1AE: mov     [r9+14h], r8d
 * 000000014051B1B2: and     [rsp+38h+var_10], 0
 * 000000014051B1B8: lea     r8, KiFlushRsbTarget
 * 000000014051B1BF: and     [rsp+38h+var_18], 0
 * 000000014051B1C5: xor     edx, edx
 * 000000014051B1C7: xor     r9d, r9d
 * 000000014051B1CA: lea     ecx, [rdx+1]
 * 000000014051B1CD: call    KiIpiSendPacket
 * 000000014051B1D2: mov     rcx, gs:20h
 * 000000014051B1DB: mov     eax, [rcx+2D80h]
 * 000000014051B1E1: test    eax, eax
 * 000000014051B1E3: jz      short loc_14051B1E9
 * 000000014051B1E5: pause
 * 000000014051B1E7: jmp     short loc_14051B1DB
 * 000000014051B1E9: call    KiFlushCurrentRsb
 * 000000014051B1EE: mov     eax, cs:KiIrqlFlags
 * 000000014051B1F4: test    eax, eax
 * 000000014051B1F6: jz      short loc_14051B23E
 * 000000014051B1F8: test    al, 1
 * 000000014051B1FA: jz      short loc_14051B23E
 * 000000014051B1FC: mov     rax, cr8
 * 000000014051B200: cmp     al, 0Fh
 * 000000014051B202: ja      short loc_14051B23E
 * 000000014051B204: cmp     bl, 0Fh
 * 000000014051B207: ja      short loc_14051B23E
 * 000000014051B209: cmp     al, 2
 * 000000014051B20B: jb      short loc_14051B23E
 * 000000014051B20D: mov     r9, gs:20h
 * 000000014051B216: movzx   ecx, bl
 * 000000014051B219: inc     ecx
 * 000000014051B21B: shl     rdi, cl
 * 000000014051B21E: mov     r8, [r9+84B8h]
 * 000000014051B225: movzx   eax, di
 * 000000014051B228: not     eax
 * 000000014051B22A: mov     edx, [r8+14h]
 * 000000014051B22E: and     edx, eax
 * 000000014051B230: mov     [r8+14h], edx
 * 000000014051B234: jnz     short loc_14051B23E
 * 000000014051B236: mov     rcx, r9
 * 000000014051B239: call    KiRemoveSystemWorkPriorityKick
 * 000000014051B23E: movzx   eax, bl
 * 000000014051B241: mov     cr8, rax
 * 000000014051B245: mov     rbx, [rsp+38h+arg_0]
 * 000000014051B24A: add     rsp, 30h
 * 000000014051B24E: pop     rdi
 * 000000014051B24F: retn
 */
