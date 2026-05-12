/*
 * XREFs of StorpTelemetrySendUnitPerfData @ 0x1C000BFB0
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C000CAC0 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BDB0 (RaidAllocatePool.c)
 *     McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1C000D464 (McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTran.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C000DCBC (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     memmove @ 0x1C0020280 (memmove.c)
 *     memset @ 0x1C0020540 (memset.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C0054B04 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 */

/*
 * Hex-Rays decompilation failed for StorpTelemetrySendUnitPerfData @ 0x1C000BFB0
 * Reason: Hex-Rays returned no pseudocode for 0x1C000BFB0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000BFB0: mov     rax, rsp
 * 00000001C000BFB3: mov     [rax+10h], rbx
 * 00000001C000BFB7: mov     [rax+18h], rsi
 * 00000001C000BFBB: mov     [rax+20h], rdi
 * 00000001C000BFBF: push    rbp
 * 00000001C000BFC0: push    r12
 * 00000001C000BFC2: push    r13
 * 00000001C000BFC4: push    r14
 * 00000001C000BFC6: push    r15
 * 00000001C000BFC8: lea     rbp, [rax-168h]
 * 00000001C000BFCF: sub     rsp, 410h
 * 00000001C000BFD6: mov     rax, cs:__security_cookie
 * 00000001C000BFDD: xor     rax, rsp
 * 00000001C000BFE0: mov     [rbp+160h+var_30], rax
 * 00000001C000BFE7: mov     r14, rcx
 * 00000001C000BFEA: xor     eax, eax
 * 00000001C000BFEC: lea     rcx, [rbp+160h+var_188]; void *
 * 00000001C000BFF0: mov     qword ptr [rbp+160h+PerformanceFrequency], rax
 * 00000001C000BFF4: xor     edx, edx; Val
 * 00000001C000BFF6: mov     r8d, 158h; Size
 * 00000001C000BFFC: call    memset
 * 00000001C000C001: mov     ebx, dword ptr cs:qword_1C0069640
 * 00000001C000C007: xor     r11d, r11d
 * 00000001C000C00A: mov     r15d, r11d
 * 00000001C000C00D: mov     [rbp+160h+var_1D0], r11
 * 00000001C000C011: mov     r13d, r11d
 * 00000001C000C014: mov     edi, r11d
 * 00000001C000C017: mov     esi, r11d
 * 00000001C000C01A: mov     [rbp+160h+var_1C8], r11
 * 00000001C000C01E: mov     r12d, r11d
 * 00000001C000C021: mov     [rbp+160h+var_1C0], r11
 * 00000001C000C025: mov     [rbp+160h+var_1B8], r11
 * 00000001C000C029: cmp     [r14+8C8h], r11
 * 00000001C000C030: jz      loc_1C0024922
 * 00000001C000C036: mov     edx, cs:Size
 * 00000001C000C03C: mov     ecx, 200h
 * 00000001C000C041: mov     r9, [r14+8]
 * 00000001C000C045: mov     r8d, 65546152h
 * 00000001C000C04B: call    RaidAllocatePool
 * 00000001C000C050: xor     r11d, r11d
 * 00000001C000C053: mov     r15, rax
 * 00000001C000C056: test    rax, rax
 * 00000001C000C059: jz      loc_1C002492C
 * 00000001C000C05F: mov     r9, [r14+8]
 * 00000001C000C063: lea     eax, [rbx+rbx*2]
 * 00000001C000C066: shl     eax, 3
 * 00000001C000C069: mov     r8d, 65546152h
 * 00000001C000C06F: mov     edx, eax
 * 00000001C000C071: mov     [rbp+160h+Size], rax
 * 00000001C000C075: mov     ecx, 200h
 * 00000001C000C07A: call    RaidAllocatePool
 * 00000001C000C07F: xor     r11d, r11d
 * 00000001C000C082: mov     r13, rax
 * 00000001C000C085: test    rax, rax
 * 00000001C000C088: jz      loc_1C002492C
 * 00000001C000C08E: cmp     cs:UseQPCTime, r11b
 * 00000001C000C095: jz      loc_1C0024936
 * 00000001C000C09B: lea     rcx, [rbp+160h+PerformanceFrequency]; PerformanceFrequency
 * 00000001C000C09F: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C000C0A6: nop     dword ptr [rax+rax+00h]
 * 00000001C000C0AB: xor     r9d, r9d
 * 00000001C000C0AE: mov     rcx, rax
 * 00000001C000C0B1: mov     r8d, 1
 * 00000001C000C0B7: test    rax, rax
 * 00000001C000C0BA: jle     short loc_1C000C0CC
 * 00000001C000C0BC: mov     rdx, [r14+8D0h]
 * 00000001C000C0C3: cmp     rax, rdx
 * 00000001C000C0C6: jl      loc_1C0024948
 * 00000001C000C0CC: mov     rax, rcx
 * 00000001C000C0CF: sub     rax, [r14+8D0h]
 * 00000001C000C0D6: cmp     cs:UseQPCTime, r9b
 * 00000001C000C0DD: jz      loc_1C0024956
 * 00000001C000C0E3: mov     r8, qword ptr [rbp+160h+PerformanceFrequency]
 * 00000001C000C0E7: mov     r10, r9
 * 00000001C000C0EA: test    r8, r8
 * 00000001C000C0ED: jz      short loc_1C000C12B
 * 00000001C000C0EF: test    rax, rax
 * 00000001C000C0F2: jz      short loc_1C000C12B
 * 00000001C000C0F4: xor     edx, edx
 * 00000001C000C0F6: div     r8
 * 00000001C000C0F9: mov     r10, rax
 * 00000001C000C0FC: imul    rax, rdx, 3E8h
 * 00000001C000C103: xor     edx, edx
 * 00000001C000C105: div     r8
 * 00000001C000C108: mov     r9, rdx
 * 00000001C000C10B: imul    rdx, r10, 3E8h
 * 00000001C000C112: add     rdx, rax
 * 00000001C000C115: imul    r10, rdx, 2710h
 * 00000001C000C11C: imul    rax, r9, 2710h
 * 00000001C000C123: xor     edx, edx
 * 00000001C000C125: div     r8
 * 00000001C000C128: add     r10, rax
 * 00000001C000C12B: mov     cs:qword_1C0069650, rcx
 * 00000001C000C132: mov     rdx, [r14+8C8h]; Src
 * 00000001C000C139: mov     [r14+8D0h], rcx
 * 00000001C000C140: mov     rcx, r15; void *
 * 00000001C000C143: mov     r8d, cs:Size; Size
 * 00000001C000C14A: mov     [rbp+160h+var_190], r10
 * 00000001C000C14E: call    memmove
 * 00000001C000C153: mov     r11d, 1
 * 00000001C000C159: cmp     cs:g_RaidNumberProcessors, r11d
 * 00000001C000C160: mov     r9d, r11d
 * 00000001C000C163: jbe     short loc_1C000C1AE
 * 00000001C000C165: mov     edx, dword ptr cs:qword_1C0069640+4
 * 00000001C000C16B: imul    edx, r9d
 * 00000001C000C16F: add     rdx, r15
 * 00000001C000C172: test    ebx, ebx
 * 00000001C000C174: jz      short loc_1C000C1A2
 * 00000001C000C176: lea     rcx, [r15+8]
 * 00000001C000C17A: sub     rdx, r15
 * 00000001C000C17D: mov     r10, rbx
 * 00000001C000C180: mov     rax, [rdx+rcx-8]
 * 00000001C000C185: add     [rcx-8], rax
 * 00000001C000C189: mov     rax, [rdx+rcx]
 * 00000001C000C18D: add     [rcx], rax
 * 00000001C000C190: mov     rax, [rdx+rcx+8]
 * 00000001C000C195: add     [rcx+8], rax
 * 00000001C000C199: lea     rcx, [rcx+18h]
 * 00000001C000C19D: sub     r10, r11
 * 00000001C000C1A0: jnz     short loc_1C000C180
 * 00000001C000C1A2: add     r9d, r11d
 * 00000001C000C1A5: cmp     r9d, cs:g_RaidNumberProcessors
 * 00000001C000C1AC: jb      short loc_1C000C165
 * 00000001C000C1AE: mov     r8, [rbp+160h+Size]; Size
 * 00000001C000C1B2: xor     edx, edx; Val
 * 00000001C000C1B4: mov     rcx, r13; void *
 * 00000001C000C1B7: call    memset
 * 00000001C000C1BC: mov     rcx, [r14+8D8h]
 * 00000001C000C1C3: xor     eax, eax
 * 00000001C000C1C5: mov     [rbp+160h+Size], rax
 * 00000001C000C1C9: test    ebx, ebx
 * 00000001C000C1CB: jz      short loc_1C000C234
 * 00000001C000C1CD: mov     r10, r15
 * 00000001C000C1D0: lea     r9, [rcx+8]
 * 00000001C000C1D4: sub     r10, rcx
 * 00000001C000C1D7: lea     edi, [rax+1]
 * 00000001C000C1DA: mov     r11, r13
 * 00000001C000C1DD: mov     rsi, rbx
 * 00000001C000C1E0: sub     r11, rcx
 * 00000001C000C1E3: mov     r12d, eax
 * 00000001C000C1E6: mov     r8, [r10+r9-8]
 * 00000001C000C1EB: sub     r8, [r9-8]
 * 00000001C000C1EF: mov     [r11+r9-8], r8
 * 00000001C000C1F4: mov     rdx, [r10+r9]
 * 00000001C000C1F8: sub     rdx, [r9]
 * 00000001C000C1FB: mov     [r11+r9], rdx
 * 00000001C000C1FF: mov     rcx, [r10+r9+8]
 * 00000001C000C204: sub     rcx, [r9+8]
 * 00000001C000C208: mov     [r11+r9+8], rcx
 * 00000001C000C20D: lea     r9, [r9+18h]
 * 00000001C000C211: lea     rax, [rdx+r8]
 * 00000001C000C215: add     r12, rax
 * 00000001C000C218: sub     rsi, rdi
 * 00000001C000C21B: jnz     short loc_1C000C1E6
 * 00000001C000C21D: mov     rcx, [r14+8D8h]; void *
 * 00000001C000C224: mov     rdi, [rbp+160h+var_1C8]
 * 00000001C000C228: mov     rsi, [rbp+160h+var_1C0]
 * 00000001C000C22C: mov     [rbp+160h+Size], r12
 * 00000001C000C230: mov     r12, [rbp+160h+var_1B8]
 * 00000001C000C234: mov     r8d, dword ptr cs:qword_1C0069640+4; Size
 * 00000001C000C23B: mov     rdx, r15; Src
 * 00000001C000C23E: call    memmove
 * 00000001C000C243: xor     r11d, r11d
 * 00000001C000C246: cmp     [rbp+160h+Size], r11
 * 00000001C000C24A: jbe     loc_1C000C812
 * 00000001C000C250: cmp     word ptr cs:TelemetryPerfContext, r11w
 * 00000001C000C258: lea     r9d, [r11+0Bh]
 * 00000001C000C25C: mov     [rbp+160h+var_58], r11
 * 00000001C000C263: jz      loc_1C002495E
 * 00000001C000C269: cmp     word ptr cs:TelemetryPerfContext+2, r11w
 * 00000001C000C271: jz      loc_1C002495E
 * 00000001C000C277: lea     r8d, [r11+1]
 * 00000001C000C27B: mov     r9d, r11d
 * 00000001C000C27E: test    ebx, ebx
 * 00000001C000C280: jz      short loc_1C000C2EF
 * 00000001C000C282: lea     r10, [r13+10h]
 * 00000001C000C286: lea     r11d, [r8+0Ah]
 * 00000001C000C28A: cmp     r9d, dword ptr cs:xmmword_1C0069630+0Ch
 * 00000001C000C291: jnb     short loc_1C000C2E0
 * 00000001C000C293: cmp     r9d, cs:dword_1C006960C
 * 00000001C000C29A: jb      short loc_1C000C2E0
 * 00000001C000C29C: movzx   ecx, word ptr cs:TelemetryPerfContext
 * 00000001C000C2A3: xor     edx, edx
 * 00000001C000C2A5: mov     eax, r9d
 * 00000001C000C2A8: div     ecx
 * 00000001C000C2AA: mov     rdx, [r10-10h]
 * 00000001C000C2AE: mov     rcx, [r10-8]
 * 00000001C000C2B2: cmp     eax, 0Ch
 * 00000001C000C2B5: cmovnb  eax, r11d
 * 00000001C000C2B9: lea     r8, [rax+rax*2]
 * 00000001C000C2BD: mov     rax, [r10]
 * 00000001C000C2C0: add     [rbp+r8*8+160h+var_168], rax
 * 00000001C000C2C5: lea     rax, [rcx+rdx]
 * 00000001C000C2C9: add     [rbp+r8*8+160h+var_178], rdx
 * 00000001C000C2CE: add     [rbp+r8*8+160h+var_170], rcx
 * 00000001C000C2D3: mov     r8d, 1
 * 00000001C000C2D9: add     [rbp+160h+var_58], rax
 * 00000001C000C2E0: add     r9d, r8d
 * 00000001C000C2E3: add     r10, 18h
 * 00000001C000C2E7: cmp     r9d, ebx
 * 00000001C000C2EA: jb      short loc_1C000C28A
 * 00000001C000C2EC: xor     r11d, r11d
 * 00000001C000C2EF: mov     r9d, 0Bh
 * 00000001C000C2F5: cmp     [r14+8E0h], r11
 * 00000001C000C2FC: jz      loc_1C000C382
 * 00000001C000C302: movzx   edx, r11w
 * 00000001C000C306: movzx   ecx, dx
 * 00000001C000C309: imul    ecx, cs:dword_1C0069658
 * 00000001C000C310: add     rcx, [r14+8E0h]
 * 00000001C000C317: mov     rax, [rcx]
 * 00000001C000C31A: cmp     rax, rdi
 * 00000001C000C31D: mov     [rcx], r11
 * 00000001C000C320: cmova   rdi, rax
 * 00000001C000C324: add     rsi, [rcx+8]
 * 00000001C000C328: add     r12, [rcx+10h]
 * 00000001C000C32C: add     dx, r8w
 * 00000001C000C330: cmp     dx, cs:g_RaidNumaHighestNodeNumber
 * 00000001C000C337: jbe     short loc_1C000C306
 * 00000001C000C339: mov     qword ptr [rbp+160h+var_1B0+8], rsi
 * 00000001C000C33D: sub     rsi, [r14+8F0h]
 * 00000001C000C344: mov     [rbp+160h+var_1A0], r12
 * 00000001C000C348: sub     r12, [r14+8F8h]
 * 00000001C000C34F: movsd   xmm1, [rbp+160h+var_1A0]
 * 00000001C000C354: mov     qword ptr [rbp+160h+var_1B0], rdi
 * 00000001C000C358: movups  xmm0, [rbp+160h+var_1B0]
 * 00000001C000C35C: mov     [rbp+160h+var_48], rdi
 * 00000001C000C363: mov     [rbp+160h+var_40], rsi
 * 00000001C000C36A: movups  xmmword ptr [r14+8E8h], xmm0
 * 00000001C000C372: mov     [rbp+160h+var_38], r12
 * 00000001C000C379: movsd   qword ptr [r14+8F8h], xmm1
 * 00000001C000C382: mov     rax, [r14+98h]
 * 00000001C000C389: test    rax, rax
 * 00000001C000C38C: jnz     short loc_1C000C3A4
 * 00000001C000C38E: mov     rdx, [r14+90h]
 * 00000001C000C395: test    rdx, rdx
 * 00000001C000C398: jnz     loc_1C000C8CF
 * 00000001C000C39E: mov     rbx, [rbp+160h+var_1D0]
 * 00000001C000C3A2: jmp     short loc_1C000C3A8
 * 00000001C000C3A4: lea     rbx, [rax+5Ah]
 * 00000001C000C3A8: cmp     cs:g_StorpTraceLoggingPerformanceHighResolutionTimer, r11d
 * 00000001C000C3AF: lea     rax, a256us1ms4ms16m; "256us, 1ms, 4ms, 16ms, 64ms, 128ms, 256"...
 * 00000001C000C3B6: mov     [rbp+160h+var_180], rax
 * 00000001C000C3BA: mov     [rbp+160h+var_50], r13
 * 00000001C000C3C1: mov     [rbp+160h+var_188], r9b
 * 00000001C000C3C5: jz      loc_1C0024969
 * 00000001C000C3CB: cmp     cs:g_StorpTraceLoggingCriticalEventEnabledSetByRegistry, r8b
 * 00000001C000C3D2: jz      loc_1C0024972
 * 00000001C000C3D8: mov     eax, cs:g_StorpTraceLoggingCriticalEventMaximum
 * 00000001C000C3DE: cmp     cs:g_StorpTraceLoggingCriticalEventsLogged, eax
 * 00000001C000C3E4: jnb     short loc_1C000C420
 * 00000001C000C3E6: mov     eax, [r14+7C8h]
 * 00000001C000C3ED: or      ecx, 0FFFFFFFFh
 * 00000001C000C3F0: test    al, 20h
 * 00000001C000C3F2: jnz     loc_1C0024984
 * 00000001C000C3F8: cmp     [r14+7CCh], r11b
 * 00000001C000C3FF: jnz     loc_1C002498F
 * 00000001C000C405: test    byte ptr [r14+1C2h], 2
 * 00000001C000C40D: jnz     loc_1C002499A
 * 00000001C000C413: cmp     cs:g_StorpTraceLoggingCriticalEventEnabled, r11d
 * 00000001C000C41A: jnz     loc_1C00249A5
 * 00000001C000C420: lea     rdx, [rbp+160h+var_190]
 * 00000001C000C424: mov     rcx, r14
 * 00000001C000C427: call    StorpTelemetryLogUnitPerfDataMeasures
 * 00000001C000C42C: test    cs:byte_1C0069844, 2
 * 00000001C000C433: jz      loc_1C000C80F
 * 00000001C000C439: mov     rsi, [r14+18h]
 * 00000001C000C43D: lea     rdi, unk_1C005B660
 * 00000001C000C444: movzx   ecx, byte ptr [r14+1C2h]
 * 00000001C000C44C: lea     rdx, [r14+0BAh]
 * 00000001C000C453: test    rbx, rbx
 * 00000001C000C456: lea     r8, [r14+0A9h]
 * 00000001C000C45D: lea     r9, [r14+0A0h]
 * 00000001C000C464: mov     rax, [rsi+1458h]
 * 00000001C000C46B: lea     r10, [rsi+1448h]
 * 00000001C000C472: cmovnz  rdi, rbx
 * 00000001C000C476: lea     r11, [r14+7B8h]
 * 00000001C000C47D: test    rax, rax
 * 00000001C000C480: lea     rbx, unk_1C005B620
 * 00000001C000C487: cmovnz  rbx, rax
 * 00000001C000C48B: mov     eax, [r14+8C0h]
 * 00000001C000C492: mov     [rsp+430h+var_1E8], rax
 * 00000001C000C49A: and     ecx, 1
 * 00000001C000C49D: mov     rax, [rbp+160h+var_38]
 * 00000001C000C4A4: mov     [rsp+430h+var_1F0], rax
 * 00000001C000C4AC: mov     rax, [rbp+160h+var_40]
 * 00000001C000C4B3: mov     [rsp+430h+var_1F8], rax
 * 00000001C000C4BB: mov     rax, [rbp+160h+var_60]
 * 00000001C000C4C2: mov     [rsp+430h+var_200], rax
 * 00000001C000C4CA: mov     rax, [rbp+160h+var_78]
 * 00000001C000C4D1: mov     [rsp+430h+var_208], rax
 * 00000001C000C4D9: mov     rax, [rbp+160h+var_90]
 * 00000001C000C4E0: mov     [rsp+430h+var_210], rax
 * 00000001C000C4E8: mov     rax, [rbp+160h+var_A8]
 * 00000001C000C4EF: mov     [rsp+430h+var_218], rax
 * 00000001C000C4F7: mov     rax, [rbp+160h+var_C0]
 * 00000001C000C4FE: mov     [rsp+430h+var_220], rax
 * 00000001C000C506: mov     rax, [rbp+160h+var_D8]
 * 00000001C000C50D: mov     [rsp+430h+var_228], rax
 * 00000001C000C515: mov     rax, [rbp+160h+var_F0]
 * 00000001C000C519: mov     [rsp+430h+var_230], rax
 * 00000001C000C521: mov     rax, [rbp+160h+var_108]
 * 00000001C000C525: mov     [rsp+430h+var_238], rax
 * 00000001C000C52D: mov     rax, [rbp+160h+var_120]
 * 00000001C000C531: mov     [rsp+430h+var_240], rax
 * 00000001C000C539: mov     rax, [rbp+160h+var_138]
 * 00000001C000C53D: mov     [rsp+430h+var_248], rax
 * 00000001C000C545: mov     rax, [rbp+160h+var_150]
 * 00000001C000C549: mov     [rsp+430h+var_250], rax
 * 00000001C000C551: mov     rax, [rbp+160h+var_168]
 * 00000001C000C555: mov     [rsp+430h+var_258], rax
 * 00000001C000C55D: mov     rax, [rbp+160h+var_68]
 * 00000001C000C564: mov     [rsp+430h+var_260], rax
 * 00000001C000C56C: mov     rax, [rbp+160h+var_80]
 * 00000001C000C573: mov     [rsp+430h+var_268], rax
 * 00000001C000C57B: mov     rax, [rbp+160h+var_98]
 * 00000001C000C582: mov     [rsp+430h+var_270], rax
 * 00000001C000C58A: mov     rax, [rbp+160h+var_B0]
 * 00000001C000C591: mov     [rsp+430h+var_278], rax
 * 00000001C000C599: mov     rax, [rbp+160h+var_C8]
 * 00000001C000C5A0: mov     [rsp+430h+var_280], rax
 * 00000001C000C5A8: mov     rax, [rbp+160h+var_E0]
 * 00000001C000C5AF: mov     [rsp+430h+var_288], rax
 * 00000001C000C5B7: mov     rax, [rbp+160h+var_F8]
 * 00000001C000C5BB: mov     [rsp+430h+var_290], rax
 * 00000001C000C5C3: mov     rax, [rbp+160h+var_110]
 * 00000001C000C5C7: mov     [rsp+430h+var_298], rax
 * 00000001C000C5CF: mov     rax, [rbp+160h+var_128]
 * 00000001C000C5D3: mov     [rsp+430h+var_2A0], rax
 * 00000001C000C5DB: mov     rax, [rbp+160h+var_140]
 * 00000001C000C5DF: mov     [rsp+430h+var_2A8], rax
 * 00000001C000C5E7: mov     rax, [rbp+160h+var_158]
 * 00000001C000C5EB: mov     [rsp+430h+var_2B0], rax
 * 00000001C000C5F3: mov     rax, [rbp+160h+var_170]
 * 00000001C000C5F7: mov     [rsp+430h+var_2B8], rax
 * 00000001C000C5FF: mov     rax, [rbp+160h+var_70]
 * 00000001C000C606: mov     [rsp+430h+var_2C0], rax
 * 00000001C000C60E: mov     rax, [rbp+160h+var_88]
 * 00000001C000C615: mov     [rsp+430h+var_2C8], rax
 * 00000001C000C61D: mov     rax, [rbp+160h+var_A0]
 * 00000001C000C624: mov     [rsp+430h+var_2D0], rax
 * 00000001C000C62C: mov     rax, [rbp+160h+var_B8]
 * 00000001C000C633: mov     [rsp+430h+var_2D8], rax
 * 00000001C000C63B: mov     rax, [rbp+160h+var_D0]
 * 00000001C000C642: mov     [rsp+430h+var_2E0], rax
 * 00000001C000C64A: mov     rax, [rbp+160h+var_E8]
 * 00000001C000C64E: mov     [rsp+430h+var_2E8], rax
 * 00000001C000C656: mov     rax, [rbp+160h+var_100]
 * 00000001C000C65A: mov     [rsp+430h+var_2F0], rax
 * 00000001C000C662: mov     rax, [rbp+160h+var_118]
 * 00000001C000C666: mov     [rsp+430h+var_2F8], rax
 * 00000001C000C66E: mov     rax, [rbp+160h+var_130]
 * 00000001C000C672: mov     [rsp+430h+var_300], rax
 * 00000001C000C67A: mov     rax, [rbp+160h+var_148]
 * 00000001C000C67E: mov     [rsp+430h+var_308], rax
 * 00000001C000C686: mov     rax, [rbp+160h+var_160]
 * 00000001C000C68A: mov     [rsp+430h+var_310], rax
 * 00000001C000C692: mov     rax, [rbp+160h+var_178]
 * 00000001C000C696: mov     [rsp+430h+var_318], rax
 * 00000001C000C69E: mov     rax, [rbp+160h+var_180]
 * 00000001C000C6A2: mov     [rsp+430h+var_320], rax
 * 00000001C000C6AA: mov     eax, [r14+908h]
 * 00000001C000C6B1: mov     dword ptr [rsp+430h+var_328], eax
 * 00000001C000C6B8: mov     eax, [r14+900h]
 * 00000001C000C6BF: mov     [rsp+430h+var_330], eax
 * 00000001C000C6C6: mov     eax, dword ptr [rbp+160h+var_48]
 * 00000001C000C6CC: mov     [rsp+430h+var_338], eax
 * 00000001C000C6D3: mov     rax, [r14+8B0h]
 * 00000001C000C6DA: mov     qword ptr [rsp+430h+var_340], rax
 * 00000001C000C6E2: mov     rax, [r14+8A8h]
 * 00000001C000C6E9: mov     [rsp+430h+var_348], rax
 * 00000001C000C6F1: mov     rax, [r14+8A0h]
 * 00000001C000C6F8: mov     [rsp+430h+var_350], rax
 * 00000001C000C700: mov     rax, [r14+898h]
 * 00000001C000C707: mov     [rsp+430h+var_358], rax
 * 00000001C000C70F: mov     rax, [r14+890h]
 * 00000001C000C716: mov     [rsp+430h+var_360], rax
 * 00000001C000C71E: mov     rax, [r14+888h]
 * 00000001C000C725: mov     [rsp+430h+var_368], rax
 * 00000001C000C72D: mov     rax, [r14+880h]
 * 00000001C000C734: mov     [rsp+430h+var_370], rax
 * 00000001C000C73C: mov     eax, [r14+318h]
 * 00000001C000C743: mov     dword ptr [rsp+430h+var_378], eax
 * 00000001C000C74A: mov     eax, [r14+314h]
 * 00000001C000C751: mov     [rsp+430h+var_380], eax
 * 00000001C000C758: mov     rax, [r14+878h]
 * 00000001C000C75F: mov     qword ptr [rsp+430h+var_388], rax
 * 00000001C000C767: mov     rax, [rbp+160h+var_58]
 * 00000001C000C76E: mov     [rsp+430h+var_390], rax
 * 00000001C000C776: mov     al, [rbp+160h+var_188]
 * 00000001C000C779: mov     byte ptr [rsp+430h+var_398], al
 * 00000001C000C780: mov     rax, cs:g_SystemUptime_s
 * 00000001C000C787: mov     qword ptr [rsp+430h+var_3A0], rax
 * 00000001C000C78F: mov     eax, [rsi+10ACh]
 * 00000001C000C795: mov     dword ptr [rsp+430h+var_3A8], ecx
 * 00000001C000C79C: lea     rcx, StorPortEventProvider_Context
 * 00000001C000C7A3: mov     qword ptr [rsp+430h+var_3B0], rdi
 * 00000001C000C7AB: mov     [rsp+430h+var_3B8], rbx
 * 00000001C000C7B0: mov     [rsp+430h+var_3C0], rdx
 * 00000001C000C7B5: lea     rdx, EventUnitPerformance
 * 00000001C000C7BC: mov     [rsp+430h+var_3C8], r8
 * 00000001C000C7C1: xor     r8d, r8d
 * 00000001C000C7C4: mov     [rsp+430h+var_3D0], r9
 * 00000001C000C7C9: mov     r9d, [rsi+38h]
 * 00000001C000C7CD: mov     dword ptr [rsp+430h+var_3D8], eax
 * 00000001C000C7D1: mov     rax, [rsi+1300h]
 * 00000001C000C7D8: mov     qword ptr [rsp+430h+var_3E0], rax
 * 00000001C000C7DD: mov     eax, [r14+0CD0h]
 * 00000001C000C7E4: mov     dword ptr [rsp+430h+var_3E8], eax
 * 00000001C000C7E8: mov     al, [r14+62h]
 * 00000001C000C7EC: mov     qword ptr [rsp+430h+var_3F0], r10
 * 00000001C000C7F1: mov     [rsp+430h+var_3F8], r11
 * 00000001C000C7F6: mov     byte ptr [rsp+430h+var_400], al
 * 00000001C000C7FA: mov     al, [r14+61h]
 * 00000001C000C7FE: mov     [rsp+430h+var_408], al
 * 00000001C000C802: mov     al, [r14+60h]
 * 00000001C000C806: mov     [rsp+430h+var_410], al
 * 00000001C000C80A: call    McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 00000001C000C80F: xor     r11d, r11d
 * 00000001C000C812: mov     ebx, r11d
 * 00000001C000C815: and     qword ptr [r14+314h], 0
 * 00000001C000C81D: mov     [r14+900h], r11
 * 00000001C000C824: mov     [r14+908h], r11
 * 00000001C000C82B: mov     [r14+878h], r11
 * 00000001C000C832: mov     [r14+880h], r11
 * 00000001C000C839: mov     [r14+888h], r11
 * 00000001C000C840: mov     [r14+890h], r11
 * 00000001C000C847: mov     [r14+898h], r11
 * 00000001C000C84E: mov     [r14+8A0h], r11
 * 00000001C000C855: mov     [r14+8A8h], r11
 * 00000001C000C85C: mov     [r14+8B0h], r11
 * 00000001C000C863: mov     [r14+8C0h], r11d
 * 00000001C000C86A: test    r15, r15
 * 00000001C000C86D: jz      short loc_1C000C883
 * 00000001C000C86F: mov     edx, 65546152h; Tag
 * 00000001C000C874: mov     rcx, r15; P
 * 00000001C000C877: call    cs:__imp_ExFreePoolWithTag
 * 00000001C000C87E: nop     dword ptr [rax+rax+00h]
 * 00000001C000C883: test    r13, r13
 * 00000001C000C886: jz      short loc_1C000C89C
 * 00000001C000C888: mov     edx, 65546152h; Tag
 * 00000001C000C88D: mov     rcx, r13; P
 * 00000001C000C890: call    cs:__imp_ExFreePoolWithTag
 * 00000001C000C897: nop     dword ptr [rax+rax+00h]
 * 00000001C000C89C: mov     eax, ebx
 * 00000001C000C89E: mov     rcx, [rbp+160h+var_30]
 * 00000001C000C8A5: xor     rcx, rsp; StackCookie
 * 00000001C000C8A8: call    __security_check_cookie
 * 00000001C000C8AD: lea     r11, [rsp+430h+var_20]
 * 00000001C000C8B5: mov     rbx, [r11+38h]
 * 00000001C000C8B9: mov     rsi, [r11+40h]
 * 00000001C000C8BD: mov     rdi, [r11+48h]
 * 00000001C000C8C1: mov     rsp, r11
 * 00000001C000C8C4: pop     r15
 * 00000001C000C8C6: pop     r14
 * 00000001C000C8C8: pop     r13
 * 00000001C000C8CA: pop     r12
 * 00000001C000C8CC: pop     rbp
 * 00000001C000C8CD: retn
 * 00000001C000C8CF: mov     rax, [r14+18h]
 * 00000001C000C8D3: lea     rbx, [rdx+29h]
 * 00000001C000C8D7: mov     rcx, [rax+228h]
 * 00000001C000C8DE: mov     eax, [rcx+0B8h]
 * 00000001C000C8E4: test    al, 40h
 * 00000001C000C8E6: jnz     loc_1C000C3A8
 * 00000001C000C8EC: jmp     loc_1C000C39E
 * 00000001C0024922: mov     ebx, 0C0000001h
 * 00000001C0024927: jmp     loc_1C000C815
 * 00000001C002492C: mov     ebx, 0C0000017h
 * 00000001C0024931: jmp     loc_1C000C815
 * 00000001C0024936: call    cs:__imp_KeQueryUnbiasedInterruptTime
 * 00000001C002493D: nop     dword ptr [rax+rax+00h]
 * 00000001C0024942: nop
 * 00000001C0024943: jmp     loc_1C000C0AB
 * 00000001C0024948: mov     rax, rcx
 * 00000001C002494B: sub     rax, rdx
 * 00000001C002494E: sub     rax, r8
 * 00000001C0024951: jmp     loc_1C000C0D6
 * 00000001C0024956: mov     r10, rax
 * 00000001C0024959: jmp     loc_1C000C12B
 * 00000001C002495E: mov     r8d, 1
 * 00000001C0024964: jmp     loc_1C000C2F5
 * 00000001C0024969: mov     [rbp+160h+var_188], 0Ah
 * 00000001C002496D: jmp     loc_1C000C3CB
 * 00000001C0024972: cmp     cs:g_StorpTraceLoggingCriticalEventEnabled, r11d
 * 00000001C0024979: jz      loc_1C000C420
 * 00000001C002497F: jmp     loc_1C000C3D8
 * 00000001C0024984: mov     cs:g_StorpTraceLoggingCriticalEventEnabled, ecx
 * 00000001C002498A: jmp     loc_1C000C3F8
 * 00000001C002498F: mov     cs:g_StorpTraceLoggingCriticalEventEnabled, ecx
 * 00000001C0024995: jmp     loc_1C000C405
 * 00000001C002499A: mov     cs:g_StorpTraceLoggingCriticalEventEnabled, ecx
 * 00000001C00249A0: jmp     loc_1C000C413
 * 00000001C00249A5: lea     rdx, [rbp+160h+var_190]
 * 00000001C00249A9: mov     rcx, r14
 * 00000001C00249AC: call    StorpTelemetryLogUnitPerfDataCriticalData
 * 00000001C00249B1: nop
 * 00000001C00249B2: jmp     loc_1C000C42C
 */
