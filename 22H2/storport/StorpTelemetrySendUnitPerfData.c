/*
 * XREFs of StorpTelemetrySendUnitPerfData @ 0x1C000BF40
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C000CA50 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BD40 (RaidAllocatePool.c)
 *     McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1C000D3F4 (McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTran.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C000DC4C (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 *     memmove @ 0x1C00201C0 (memmove.c)
 *     memset @ 0x1C0020480 (memset.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C0054AE4 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 */

/*
 * Hex-Rays decompilation failed for StorpTelemetrySendUnitPerfData @ 0x1C000BF40
 * Reason: Hex-Rays returned no pseudocode for 0x1C000BF40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000BF40: mov     rax, rsp
 * 00000001C000BF43: mov     [rax+10h], rbx
 * 00000001C000BF47: mov     [rax+18h], rsi
 * 00000001C000BF4B: mov     [rax+20h], rdi
 * 00000001C000BF4F: push    rbp
 * 00000001C000BF50: push    r12
 * 00000001C000BF52: push    r13
 * 00000001C000BF54: push    r14
 * 00000001C000BF56: push    r15
 * 00000001C000BF58: lea     rbp, [rax-168h]
 * 00000001C000BF5F: sub     rsp, 410h
 * 00000001C000BF66: mov     rax, cs:__security_cookie
 * 00000001C000BF6D: xor     rax, rsp
 * 00000001C000BF70: mov     [rbp+160h+var_30], rax
 * 00000001C000BF77: mov     r14, rcx
 * 00000001C000BF7A: xor     eax, eax
 * 00000001C000BF7C: lea     rcx, [rbp+160h+var_188]; void *
 * 00000001C000BF80: mov     qword ptr [rbp+160h+PerformanceFrequency], rax
 * 00000001C000BF84: xor     edx, edx; Val
 * 00000001C000BF86: mov     r8d, 158h; Size
 * 00000001C000BF8C: call    memset
 * 00000001C000BF91: mov     ebx, dword ptr cs:qword_1C0069640
 * 00000001C000BF97: xor     r11d, r11d
 * 00000001C000BF9A: mov     r15d, r11d
 * 00000001C000BF9D: mov     [rbp+160h+var_1D0], r11
 * 00000001C000BFA1: mov     r13d, r11d
 * 00000001C000BFA4: mov     edi, r11d
 * 00000001C000BFA7: mov     esi, r11d
 * 00000001C000BFAA: mov     [rbp+160h+var_1C8], r11
 * 00000001C000BFAE: mov     r12d, r11d
 * 00000001C000BFB1: mov     [rbp+160h+var_1C0], r11
 * 00000001C000BFB5: mov     [rbp+160h+var_1B8], r11
 * 00000001C000BFB9: cmp     [r14+8C8h], r11
 * 00000001C000BFC0: jz      loc_1C0024902
 * 00000001C000BFC6: mov     edx, cs:Size
 * 00000001C000BFCC: mov     ecx, 200h
 * 00000001C000BFD1: mov     r9, [r14+8]
 * 00000001C000BFD5: mov     r8d, 65546152h
 * 00000001C000BFDB: call    RaidAllocatePool
 * 00000001C000BFE0: xor     r11d, r11d
 * 00000001C000BFE3: mov     r15, rax
 * 00000001C000BFE6: test    rax, rax
 * 00000001C000BFE9: jz      loc_1C002490C
 * 00000001C000BFEF: mov     r9, [r14+8]
 * 00000001C000BFF3: lea     eax, [rbx+rbx*2]
 * 00000001C000BFF6: shl     eax, 3
 * 00000001C000BFF9: mov     r8d, 65546152h
 * 00000001C000BFFF: mov     edx, eax
 * 00000001C000C001: mov     [rbp+160h+Size], rax
 * 00000001C000C005: mov     ecx, 200h
 * 00000001C000C00A: call    RaidAllocatePool
 * 00000001C000C00F: xor     r11d, r11d
 * 00000001C000C012: mov     r13, rax
 * 00000001C000C015: test    rax, rax
 * 00000001C000C018: jz      loc_1C002490C
 * 00000001C000C01E: cmp     cs:UseQPCTime, r11b
 * 00000001C000C025: jz      loc_1C0024916
 * 00000001C000C02B: lea     rcx, [rbp+160h+PerformanceFrequency]; PerformanceFrequency
 * 00000001C000C02F: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C000C036: nop     dword ptr [rax+rax+00h]
 * 00000001C000C03B: xor     r9d, r9d
 * 00000001C000C03E: mov     rcx, rax
 * 00000001C000C041: mov     r8d, 1
 * 00000001C000C047: test    rax, rax
 * 00000001C000C04A: jle     short loc_1C000C05C
 * 00000001C000C04C: mov     rdx, [r14+8D0h]
 * 00000001C000C053: cmp     rax, rdx
 * 00000001C000C056: jl      loc_1C0024928
 * 00000001C000C05C: mov     rax, rcx
 * 00000001C000C05F: sub     rax, [r14+8D0h]
 * 00000001C000C066: cmp     cs:UseQPCTime, r9b
 * 00000001C000C06D: jz      loc_1C0024936
 * 00000001C000C073: mov     r8, qword ptr [rbp+160h+PerformanceFrequency]
 * 00000001C000C077: mov     r10, r9
 * 00000001C000C07A: test    r8, r8
 * 00000001C000C07D: jz      short loc_1C000C0BB
 * 00000001C000C07F: test    rax, rax
 * 00000001C000C082: jz      short loc_1C000C0BB
 * 00000001C000C084: xor     edx, edx
 * 00000001C000C086: div     r8
 * 00000001C000C089: mov     r10, rax
 * 00000001C000C08C: imul    rax, rdx, 3E8h
 * 00000001C000C093: xor     edx, edx
 * 00000001C000C095: div     r8
 * 00000001C000C098: mov     r9, rdx
 * 00000001C000C09B: imul    rdx, r10, 3E8h
 * 00000001C000C0A2: add     rdx, rax
 * 00000001C000C0A5: imul    r10, rdx, 2710h
 * 00000001C000C0AC: imul    rax, r9, 2710h
 * 00000001C000C0B3: xor     edx, edx
 * 00000001C000C0B5: div     r8
 * 00000001C000C0B8: add     r10, rax
 * 00000001C000C0BB: mov     cs:qword_1C0069650, rcx
 * 00000001C000C0C2: mov     rdx, [r14+8C8h]; Src
 * 00000001C000C0C9: mov     [r14+8D0h], rcx
 * 00000001C000C0D0: mov     rcx, r15; void *
 * 00000001C000C0D3: mov     r8d, cs:Size; Size
 * 00000001C000C0DA: mov     [rbp+160h+var_190], r10
 * 00000001C000C0DE: call    memmove
 * 00000001C000C0E3: mov     r11d, 1
 * 00000001C000C0E9: cmp     cs:g_RaidNumberProcessors, r11d
 * 00000001C000C0F0: mov     r9d, r11d
 * 00000001C000C0F3: jbe     short loc_1C000C13E
 * 00000001C000C0F5: mov     edx, dword ptr cs:qword_1C0069640+4
 * 00000001C000C0FB: imul    edx, r9d
 * 00000001C000C0FF: add     rdx, r15
 * 00000001C000C102: test    ebx, ebx
 * 00000001C000C104: jz      short loc_1C000C132
 * 00000001C000C106: lea     rcx, [r15+8]
 * 00000001C000C10A: sub     rdx, r15
 * 00000001C000C10D: mov     r10, rbx
 * 00000001C000C110: mov     rax, [rdx+rcx-8]
 * 00000001C000C115: add     [rcx-8], rax
 * 00000001C000C119: mov     rax, [rdx+rcx]
 * 00000001C000C11D: add     [rcx], rax
 * 00000001C000C120: mov     rax, [rdx+rcx+8]
 * 00000001C000C125: add     [rcx+8], rax
 * 00000001C000C129: lea     rcx, [rcx+18h]
 * 00000001C000C12D: sub     r10, r11
 * 00000001C000C130: jnz     short loc_1C000C110
 * 00000001C000C132: add     r9d, r11d
 * 00000001C000C135: cmp     r9d, cs:g_RaidNumberProcessors
 * 00000001C000C13C: jb      short loc_1C000C0F5
 * 00000001C000C13E: mov     r8, [rbp+160h+Size]; Size
 * 00000001C000C142: xor     edx, edx; Val
 * 00000001C000C144: mov     rcx, r13; void *
 * 00000001C000C147: call    memset
 * 00000001C000C14C: mov     rcx, [r14+8D8h]
 * 00000001C000C153: xor     eax, eax
 * 00000001C000C155: mov     [rbp+160h+Size], rax
 * 00000001C000C159: test    ebx, ebx
 * 00000001C000C15B: jz      short loc_1C000C1C4
 * 00000001C000C15D: mov     r10, r15
 * 00000001C000C160: lea     r9, [rcx+8]
 * 00000001C000C164: sub     r10, rcx
 * 00000001C000C167: lea     edi, [rax+1]
 * 00000001C000C16A: mov     r11, r13
 * 00000001C000C16D: mov     rsi, rbx
 * 00000001C000C170: sub     r11, rcx
 * 00000001C000C173: mov     r12d, eax
 * 00000001C000C176: mov     r8, [r10+r9-8]
 * 00000001C000C17B: sub     r8, [r9-8]
 * 00000001C000C17F: mov     [r11+r9-8], r8
 * 00000001C000C184: mov     rdx, [r10+r9]
 * 00000001C000C188: sub     rdx, [r9]
 * 00000001C000C18B: mov     [r11+r9], rdx
 * 00000001C000C18F: mov     rcx, [r10+r9+8]
 * 00000001C000C194: sub     rcx, [r9+8]
 * 00000001C000C198: mov     [r11+r9+8], rcx
 * 00000001C000C19D: lea     r9, [r9+18h]
 * 00000001C000C1A1: lea     rax, [rdx+r8]
 * 00000001C000C1A5: add     r12, rax
 * 00000001C000C1A8: sub     rsi, rdi
 * 00000001C000C1AB: jnz     short loc_1C000C176
 * 00000001C000C1AD: mov     rcx, [r14+8D8h]; void *
 * 00000001C000C1B4: mov     rdi, [rbp+160h+var_1C8]
 * 00000001C000C1B8: mov     rsi, [rbp+160h+var_1C0]
 * 00000001C000C1BC: mov     [rbp+160h+Size], r12
 * 00000001C000C1C0: mov     r12, [rbp+160h+var_1B8]
 * 00000001C000C1C4: mov     r8d, dword ptr cs:qword_1C0069640+4; Size
 * 00000001C000C1CB: mov     rdx, r15; Src
 * 00000001C000C1CE: call    memmove
 * 00000001C000C1D3: xor     r11d, r11d
 * 00000001C000C1D6: cmp     [rbp+160h+Size], r11
 * 00000001C000C1DA: jbe     loc_1C000C7A2
 * 00000001C000C1E0: cmp     word ptr cs:TelemetryPerfContext, r11w
 * 00000001C000C1E8: lea     r9d, [r11+0Bh]
 * 00000001C000C1EC: mov     [rbp+160h+var_58], r11
 * 00000001C000C1F3: jz      loc_1C002493E
 * 00000001C000C1F9: cmp     word ptr cs:TelemetryPerfContext+2, r11w
 * 00000001C000C201: jz      loc_1C002493E
 * 00000001C000C207: lea     r8d, [r11+1]
 * 00000001C000C20B: mov     r9d, r11d
 * 00000001C000C20E: test    ebx, ebx
 * 00000001C000C210: jz      short loc_1C000C27F
 * 00000001C000C212: lea     r10, [r13+10h]
 * 00000001C000C216: lea     r11d, [r8+0Ah]
 * 00000001C000C21A: cmp     r9d, dword ptr cs:xmmword_1C0069630+0Ch
 * 00000001C000C221: jnb     short loc_1C000C270
 * 00000001C000C223: cmp     r9d, cs:dword_1C006960C
 * 00000001C000C22A: jb      short loc_1C000C270
 * 00000001C000C22C: movzx   ecx, word ptr cs:TelemetryPerfContext
 * 00000001C000C233: xor     edx, edx
 * 00000001C000C235: mov     eax, r9d
 * 00000001C000C238: div     ecx
 * 00000001C000C23A: mov     rdx, [r10-10h]
 * 00000001C000C23E: mov     rcx, [r10-8]
 * 00000001C000C242: cmp     eax, 0Ch
 * 00000001C000C245: cmovnb  eax, r11d
 * 00000001C000C249: lea     r8, [rax+rax*2]
 * 00000001C000C24D: mov     rax, [r10]
 * 00000001C000C250: add     [rbp+r8*8+160h+var_168], rax
 * 00000001C000C255: lea     rax, [rcx+rdx]
 * 00000001C000C259: add     [rbp+r8*8+160h+var_178], rdx
 * 00000001C000C25E: add     [rbp+r8*8+160h+var_170], rcx
 * 00000001C000C263: mov     r8d, 1
 * 00000001C000C269: add     [rbp+160h+var_58], rax
 * 00000001C000C270: add     r9d, r8d
 * 00000001C000C273: add     r10, 18h
 * 00000001C000C277: cmp     r9d, ebx
 * 00000001C000C27A: jb      short loc_1C000C21A
 * 00000001C000C27C: xor     r11d, r11d
 * 00000001C000C27F: mov     r9d, 0Bh
 * 00000001C000C285: cmp     [r14+8E0h], r11
 * 00000001C000C28C: jz      loc_1C000C312
 * 00000001C000C292: movzx   edx, r11w
 * 00000001C000C296: movzx   ecx, dx
 * 00000001C000C299: imul    ecx, cs:dword_1C0069658
 * 00000001C000C2A0: add     rcx, [r14+8E0h]
 * 00000001C000C2A7: mov     rax, [rcx]
 * 00000001C000C2AA: cmp     rax, rdi
 * 00000001C000C2AD: mov     [rcx], r11
 * 00000001C000C2B0: cmova   rdi, rax
 * 00000001C000C2B4: add     rsi, [rcx+8]
 * 00000001C000C2B8: add     r12, [rcx+10h]
 * 00000001C000C2BC: add     dx, r8w
 * 00000001C000C2C0: cmp     dx, cs:g_RaidNumaHighestNodeNumber
 * 00000001C000C2C7: jbe     short loc_1C000C296
 * 00000001C000C2C9: mov     qword ptr [rbp+160h+var_1B0+8], rsi
 * 00000001C000C2CD: sub     rsi, [r14+8F0h]
 * 00000001C000C2D4: mov     [rbp+160h+var_1A0], r12
 * 00000001C000C2D8: sub     r12, [r14+8F8h]
 * 00000001C000C2DF: movsd   xmm1, [rbp+160h+var_1A0]
 * 00000001C000C2E4: mov     qword ptr [rbp+160h+var_1B0], rdi
 * 00000001C000C2E8: movups  xmm0, [rbp+160h+var_1B0]
 * 00000001C000C2EC: mov     [rbp+160h+var_48], rdi
 * 00000001C000C2F3: mov     [rbp+160h+var_40], rsi
 * 00000001C000C2FA: movups  xmmword ptr [r14+8E8h], xmm0
 * 00000001C000C302: mov     [rbp+160h+var_38], r12
 * 00000001C000C309: movsd   qword ptr [r14+8F8h], xmm1
 * 00000001C000C312: mov     rax, [r14+98h]
 * 00000001C000C319: test    rax, rax
 * 00000001C000C31C: jnz     short loc_1C000C334
 * 00000001C000C31E: mov     rdx, [r14+90h]
 * 00000001C000C325: test    rdx, rdx
 * 00000001C000C328: jnz     loc_1C000C85F
 * 00000001C000C32E: mov     rbx, [rbp+160h+var_1D0]
 * 00000001C000C332: jmp     short loc_1C000C338
 * 00000001C000C334: lea     rbx, [rax+5Ah]
 * 00000001C000C338: cmp     cs:g_StorpTraceLoggingPerformanceHighResolutionTimer, r11d
 * 00000001C000C33F: lea     rax, a256us1ms4ms16m; "256us, 1ms, 4ms, 16ms, 64ms, 128ms, 256"...
 * 00000001C000C346: mov     [rbp+160h+var_180], rax
 * 00000001C000C34A: mov     [rbp+160h+var_50], r13
 * 00000001C000C351: mov     [rbp+160h+var_188], r9b
 * 00000001C000C355: jz      loc_1C0024949
 * 00000001C000C35B: cmp     cs:g_StorpTraceLoggingCriticalEventEnabledSetByRegistry, r8b
 * 00000001C000C362: jz      loc_1C0024952
 * 00000001C000C368: mov     eax, cs:g_StorpTraceLoggingCriticalEventMaximum
 * 00000001C000C36E: cmp     cs:g_StorpTraceLoggingCriticalEventsLogged, eax
 * 00000001C000C374: jnb     short loc_1C000C3B0
 * 00000001C000C376: mov     eax, [r14+7C8h]
 * 00000001C000C37D: or      ecx, 0FFFFFFFFh
 * 00000001C000C380: test    al, 20h
 * 00000001C000C382: jnz     loc_1C0024964
 * 00000001C000C388: cmp     [r14+7CCh], r11b
 * 00000001C000C38F: jnz     loc_1C002496F
 * 00000001C000C395: test    byte ptr [r14+1C2h], 2
 * 00000001C000C39D: jnz     loc_1C002497A
 * 00000001C000C3A3: cmp     cs:g_StorpTraceLoggingCriticalEventEnabled, r11d
 * 00000001C000C3AA: jnz     loc_1C0024985
 * 00000001C000C3B0: lea     rdx, [rbp+160h+var_190]
 * 00000001C000C3B4: mov     rcx, r14
 * 00000001C000C3B7: call    StorpTelemetryLogUnitPerfDataMeasures
 * 00000001C000C3BC: test    cs:byte_1C0069844, 2
 * 00000001C000C3C3: jz      loc_1C000C79F
 * 00000001C000C3C9: mov     rsi, [r14+18h]
 * 00000001C000C3CD: lea     rdi, unk_1C005B660
 * 00000001C000C3D4: movzx   ecx, byte ptr [r14+1C2h]
 * 00000001C000C3DC: lea     rdx, [r14+0BAh]
 * 00000001C000C3E3: test    rbx, rbx
 * 00000001C000C3E6: lea     r8, [r14+0A9h]
 * 00000001C000C3ED: lea     r9, [r14+0A0h]
 * 00000001C000C3F4: mov     rax, [rsi+1458h]
 * 00000001C000C3FB: lea     r10, [rsi+1448h]
 * 00000001C000C402: cmovnz  rdi, rbx
 * 00000001C000C406: lea     r11, [r14+7B8h]
 * 00000001C000C40D: test    rax, rax
 * 00000001C000C410: lea     rbx, unk_1C005B620
 * 00000001C000C417: cmovnz  rbx, rax
 * 00000001C000C41B: mov     eax, [r14+8C0h]
 * 00000001C000C422: mov     [rsp+430h+var_1E8], rax
 * 00000001C000C42A: and     ecx, 1
 * 00000001C000C42D: mov     rax, [rbp+160h+var_38]
 * 00000001C000C434: mov     [rsp+430h+var_1F0], rax
 * 00000001C000C43C: mov     rax, [rbp+160h+var_40]
 * 00000001C000C443: mov     [rsp+430h+var_1F8], rax
 * 00000001C000C44B: mov     rax, [rbp+160h+var_60]
 * 00000001C000C452: mov     [rsp+430h+var_200], rax
 * 00000001C000C45A: mov     rax, [rbp+160h+var_78]
 * 00000001C000C461: mov     [rsp+430h+var_208], rax
 * 00000001C000C469: mov     rax, [rbp+160h+var_90]
 * 00000001C000C470: mov     [rsp+430h+var_210], rax
 * 00000001C000C478: mov     rax, [rbp+160h+var_A8]
 * 00000001C000C47F: mov     [rsp+430h+var_218], rax
 * 00000001C000C487: mov     rax, [rbp+160h+var_C0]
 * 00000001C000C48E: mov     [rsp+430h+var_220], rax
 * 00000001C000C496: mov     rax, [rbp+160h+var_D8]
 * 00000001C000C49D: mov     [rsp+430h+var_228], rax
 * 00000001C000C4A5: mov     rax, [rbp+160h+var_F0]
 * 00000001C000C4A9: mov     [rsp+430h+var_230], rax
 * 00000001C000C4B1: mov     rax, [rbp+160h+var_108]
 * 00000001C000C4B5: mov     [rsp+430h+var_238], rax
 * 00000001C000C4BD: mov     rax, [rbp+160h+var_120]
 * 00000001C000C4C1: mov     [rsp+430h+var_240], rax
 * 00000001C000C4C9: mov     rax, [rbp+160h+var_138]
 * 00000001C000C4CD: mov     [rsp+430h+var_248], rax
 * 00000001C000C4D5: mov     rax, [rbp+160h+var_150]
 * 00000001C000C4D9: mov     [rsp+430h+var_250], rax
 * 00000001C000C4E1: mov     rax, [rbp+160h+var_168]
 * 00000001C000C4E5: mov     [rsp+430h+var_258], rax
 * 00000001C000C4ED: mov     rax, [rbp+160h+var_68]
 * 00000001C000C4F4: mov     [rsp+430h+var_260], rax
 * 00000001C000C4FC: mov     rax, [rbp+160h+var_80]
 * 00000001C000C503: mov     [rsp+430h+var_268], rax
 * 00000001C000C50B: mov     rax, [rbp+160h+var_98]
 * 00000001C000C512: mov     [rsp+430h+var_270], rax
 * 00000001C000C51A: mov     rax, [rbp+160h+var_B0]
 * 00000001C000C521: mov     [rsp+430h+var_278], rax
 * 00000001C000C529: mov     rax, [rbp+160h+var_C8]
 * 00000001C000C530: mov     [rsp+430h+var_280], rax
 * 00000001C000C538: mov     rax, [rbp+160h+var_E0]
 * 00000001C000C53F: mov     [rsp+430h+var_288], rax
 * 00000001C000C547: mov     rax, [rbp+160h+var_F8]
 * 00000001C000C54B: mov     [rsp+430h+var_290], rax
 * 00000001C000C553: mov     rax, [rbp+160h+var_110]
 * 00000001C000C557: mov     [rsp+430h+var_298], rax
 * 00000001C000C55F: mov     rax, [rbp+160h+var_128]
 * 00000001C000C563: mov     [rsp+430h+var_2A0], rax
 * 00000001C000C56B: mov     rax, [rbp+160h+var_140]
 * 00000001C000C56F: mov     [rsp+430h+var_2A8], rax
 * 00000001C000C577: mov     rax, [rbp+160h+var_158]
 * 00000001C000C57B: mov     [rsp+430h+var_2B0], rax
 * 00000001C000C583: mov     rax, [rbp+160h+var_170]
 * 00000001C000C587: mov     [rsp+430h+var_2B8], rax
 * 00000001C000C58F: mov     rax, [rbp+160h+var_70]
 * 00000001C000C596: mov     [rsp+430h+var_2C0], rax
 * 00000001C000C59E: mov     rax, [rbp+160h+var_88]
 * 00000001C000C5A5: mov     [rsp+430h+var_2C8], rax
 * 00000001C000C5AD: mov     rax, [rbp+160h+var_A0]
 * 00000001C000C5B4: mov     [rsp+430h+var_2D0], rax
 * 00000001C000C5BC: mov     rax, [rbp+160h+var_B8]
 * 00000001C000C5C3: mov     [rsp+430h+var_2D8], rax
 * 00000001C000C5CB: mov     rax, [rbp+160h+var_D0]
 * 00000001C000C5D2: mov     [rsp+430h+var_2E0], rax
 * 00000001C000C5DA: mov     rax, [rbp+160h+var_E8]
 * 00000001C000C5DE: mov     [rsp+430h+var_2E8], rax
 * 00000001C000C5E6: mov     rax, [rbp+160h+var_100]
 * 00000001C000C5EA: mov     [rsp+430h+var_2F0], rax
 * 00000001C000C5F2: mov     rax, [rbp+160h+var_118]
 * 00000001C000C5F6: mov     [rsp+430h+var_2F8], rax
 * 00000001C000C5FE: mov     rax, [rbp+160h+var_130]
 * 00000001C000C602: mov     [rsp+430h+var_300], rax
 * 00000001C000C60A: mov     rax, [rbp+160h+var_148]
 * 00000001C000C60E: mov     [rsp+430h+var_308], rax
 * 00000001C000C616: mov     rax, [rbp+160h+var_160]
 * 00000001C000C61A: mov     [rsp+430h+var_310], rax
 * 00000001C000C622: mov     rax, [rbp+160h+var_178]
 * 00000001C000C626: mov     [rsp+430h+var_318], rax
 * 00000001C000C62E: mov     rax, [rbp+160h+var_180]
 * 00000001C000C632: mov     [rsp+430h+var_320], rax
 * 00000001C000C63A: mov     eax, [r14+908h]
 * 00000001C000C641: mov     dword ptr [rsp+430h+var_328], eax
 * 00000001C000C648: mov     eax, [r14+900h]
 * 00000001C000C64F: mov     [rsp+430h+var_330], eax
 * 00000001C000C656: mov     eax, dword ptr [rbp+160h+var_48]
 * 00000001C000C65C: mov     [rsp+430h+var_338], eax
 * 00000001C000C663: mov     rax, [r14+8B0h]
 * 00000001C000C66A: mov     qword ptr [rsp+430h+var_340], rax
 * 00000001C000C672: mov     rax, [r14+8A8h]
 * 00000001C000C679: mov     [rsp+430h+var_348], rax
 * 00000001C000C681: mov     rax, [r14+8A0h]
 * 00000001C000C688: mov     [rsp+430h+var_350], rax
 * 00000001C000C690: mov     rax, [r14+898h]
 * 00000001C000C697: mov     [rsp+430h+var_358], rax
 * 00000001C000C69F: mov     rax, [r14+890h]
 * 00000001C000C6A6: mov     [rsp+430h+var_360], rax
 * 00000001C000C6AE: mov     rax, [r14+888h]
 * 00000001C000C6B5: mov     [rsp+430h+var_368], rax
 * 00000001C000C6BD: mov     rax, [r14+880h]
 * 00000001C000C6C4: mov     [rsp+430h+var_370], rax
 * 00000001C000C6CC: mov     eax, [r14+318h]
 * 00000001C000C6D3: mov     dword ptr [rsp+430h+var_378], eax
 * 00000001C000C6DA: mov     eax, [r14+314h]
 * 00000001C000C6E1: mov     [rsp+430h+var_380], eax
 * 00000001C000C6E8: mov     rax, [r14+878h]
 * 00000001C000C6EF: mov     qword ptr [rsp+430h+var_388], rax
 * 00000001C000C6F7: mov     rax, [rbp+160h+var_58]
 * 00000001C000C6FE: mov     [rsp+430h+var_390], rax
 * 00000001C000C706: mov     al, [rbp+160h+var_188]
 * 00000001C000C709: mov     byte ptr [rsp+430h+var_398], al
 * 00000001C000C710: mov     rax, cs:g_SystemUptime_s
 * 00000001C000C717: mov     qword ptr [rsp+430h+var_3A0], rax
 * 00000001C000C71F: mov     eax, [rsi+10ACh]
 * 00000001C000C725: mov     dword ptr [rsp+430h+var_3A8], ecx
 * 00000001C000C72C: lea     rcx, StorPortEventProvider_Context
 * 00000001C000C733: mov     qword ptr [rsp+430h+var_3B0], rdi
 * 00000001C000C73B: mov     [rsp+430h+var_3B8], rbx
 * 00000001C000C740: mov     [rsp+430h+var_3C0], rdx
 * 00000001C000C745: lea     rdx, EventUnitPerformance
 * 00000001C000C74C: mov     [rsp+430h+var_3C8], r8
 * 00000001C000C751: xor     r8d, r8d
 * 00000001C000C754: mov     [rsp+430h+var_3D0], r9
 * 00000001C000C759: mov     r9d, [rsi+38h]
 * 00000001C000C75D: mov     dword ptr [rsp+430h+var_3D8], eax
 * 00000001C000C761: mov     rax, [rsi+1300h]
 * 00000001C000C768: mov     qword ptr [rsp+430h+var_3E0], rax
 * 00000001C000C76D: mov     eax, [r14+0CD0h]
 * 00000001C000C774: mov     dword ptr [rsp+430h+var_3E8], eax
 * 00000001C000C778: mov     al, [r14+62h]
 * 00000001C000C77C: mov     qword ptr [rsp+430h+var_3F0], r10
 * 00000001C000C781: mov     [rsp+430h+var_3F8], r11
 * 00000001C000C786: mov     byte ptr [rsp+430h+var_400], al
 * 00000001C000C78A: mov     al, [r14+61h]
 * 00000001C000C78E: mov     [rsp+430h+var_408], al
 * 00000001C000C792: mov     al, [r14+60h]
 * 00000001C000C796: mov     [rsp+430h+var_410], al
 * 00000001C000C79A: call    McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 00000001C000C79F: xor     r11d, r11d
 * 00000001C000C7A2: mov     ebx, r11d
 * 00000001C000C7A5: and     qword ptr [r14+314h], 0
 * 00000001C000C7AD: mov     [r14+900h], r11
 * 00000001C000C7B4: mov     [r14+908h], r11
 * 00000001C000C7BB: mov     [r14+878h], r11
 * 00000001C000C7C2: mov     [r14+880h], r11
 * 00000001C000C7C9: mov     [r14+888h], r11
 * 00000001C000C7D0: mov     [r14+890h], r11
 * 00000001C000C7D7: mov     [r14+898h], r11
 * 00000001C000C7DE: mov     [r14+8A0h], r11
 * 00000001C000C7E5: mov     [r14+8A8h], r11
 * 00000001C000C7EC: mov     [r14+8B0h], r11
 * 00000001C000C7F3: mov     [r14+8C0h], r11d
 * 00000001C000C7FA: test    r15, r15
 * 00000001C000C7FD: jz      short loc_1C000C813
 * 00000001C000C7FF: mov     edx, 65546152h; Tag
 * 00000001C000C804: mov     rcx, r15; P
 * 00000001C000C807: call    cs:__imp_ExFreePoolWithTag
 * 00000001C000C80E: nop     dword ptr [rax+rax+00h]
 * 00000001C000C813: test    r13, r13
 * 00000001C000C816: jz      short loc_1C000C82C
 * 00000001C000C818: mov     edx, 65546152h; Tag
 * 00000001C000C81D: mov     rcx, r13; P
 * 00000001C000C820: call    cs:__imp_ExFreePoolWithTag
 * 00000001C000C827: nop     dword ptr [rax+rax+00h]
 * 00000001C000C82C: mov     eax, ebx
 * 00000001C000C82E: mov     rcx, [rbp+160h+var_30]
 * 00000001C000C835: xor     rcx, rsp; StackCookie
 * 00000001C000C838: call    __security_check_cookie
 * 00000001C000C83D: lea     r11, [rsp+430h+var_20]
 * 00000001C000C845: mov     rbx, [r11+38h]
 * 00000001C000C849: mov     rsi, [r11+40h]
 * 00000001C000C84D: mov     rdi, [r11+48h]
 * 00000001C000C851: mov     rsp, r11
 * 00000001C000C854: pop     r15
 * 00000001C000C856: pop     r14
 * 00000001C000C858: pop     r13
 * 00000001C000C85A: pop     r12
 * 00000001C000C85C: pop     rbp
 * 00000001C000C85D: retn
 * 00000001C000C85F: mov     rax, [r14+18h]
 * 00000001C000C863: lea     rbx, [rdx+29h]
 * 00000001C000C867: mov     rcx, [rax+228h]
 * 00000001C000C86E: mov     eax, [rcx+0B8h]
 * 00000001C000C874: test    al, 40h
 * 00000001C000C876: jnz     loc_1C000C338
 * 00000001C000C87C: jmp     loc_1C000C32E
 * 00000001C0024902: mov     ebx, 0C0000001h
 * 00000001C0024907: jmp     loc_1C000C7A5
 * 00000001C002490C: mov     ebx, 0C0000017h
 * 00000001C0024911: jmp     loc_1C000C7A5
 * 00000001C0024916: call    cs:__imp_KeQueryUnbiasedInterruptTime
 * 00000001C002491D: nop     dword ptr [rax+rax+00h]
 * 00000001C0024922: nop
 * 00000001C0024923: jmp     loc_1C000C03B
 * 00000001C0024928: mov     rax, rcx
 * 00000001C002492B: sub     rax, rdx
 * 00000001C002492E: sub     rax, r8
 * 00000001C0024931: jmp     loc_1C000C066
 * 00000001C0024936: mov     r10, rax
 * 00000001C0024939: jmp     loc_1C000C0BB
 * 00000001C002493E: mov     r8d, 1
 * 00000001C0024944: jmp     loc_1C000C285
 * 00000001C0024949: mov     [rbp+160h+var_188], 0Ah
 * 00000001C002494D: jmp     loc_1C000C35B
 * 00000001C0024952: cmp     cs:g_StorpTraceLoggingCriticalEventEnabled, r11d
 * 00000001C0024959: jz      loc_1C000C3B0
 * 00000001C002495F: jmp     loc_1C000C368
 * 00000001C0024964: mov     cs:g_StorpTraceLoggingCriticalEventEnabled, ecx
 * 00000001C002496A: jmp     loc_1C000C388
 * 00000001C002496F: mov     cs:g_StorpTraceLoggingCriticalEventEnabled, ecx
 * 00000001C0024975: jmp     loc_1C000C395
 * 00000001C002497A: mov     cs:g_StorpTraceLoggingCriticalEventEnabled, ecx
 * 00000001C0024980: jmp     loc_1C000C3A3
 * 00000001C0024985: lea     rdx, [rbp+160h+var_190]
 * 00000001C0024989: mov     rcx, r14
 * 00000001C002498C: call    StorpTelemetryLogUnitPerfDataCriticalData
 * 00000001C0024991: nop
 * 00000001C0024992: jmp     loc_1C000C3BC
 */
