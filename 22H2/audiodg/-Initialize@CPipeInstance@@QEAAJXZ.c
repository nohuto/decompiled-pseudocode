/*
 * XREFs of ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B8B0
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140004CC0 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x1400059A0 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007AD0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14004CF30 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x14004EC98 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140006070 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x14000B9BC (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000BD40 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000F4D0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14003DD6C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x14003E95C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14004D95C (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B8B0
 * Reason: Hex-Rays returned no pseudocode for 0x14000B8B0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000B8B0: mov     [rsp+arg_0], rbx
 * 000000014000B8B5: mov     [rsp+arg_8], rsi
 * 000000014000B8BA: push    rdi
 * 000000014000B8BB: sub     rsp, 20h
 * 000000014000B8BF: cmp     qword ptr [rcx], 0
 * 000000014000B8C3: mov     rsi, rcx
 * 000000014000B8C6: jnz     short loc_14000B8D2
 * 000000014000B8C8: cmp     dword ptr [rcx+8], 0
 * 000000014000B8CC: jz      loc_14000B997
 * 000000014000B8D2: cmp     dword ptr [rcx+70h], 3
 * 000000014000B8D6: jnz     loc_14000B985
 * 000000014000B8DC: call    ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ; CPipeInstance::ResolveFormatConflictsLeftRight(void)
 * 000000014000B8E1: mov     ebx, eax
 * 000000014000B8E3: test    eax, eax
 * 000000014000B8E5: js      loc_140033FB4
 * 000000014000B8EB: mov     rbx, [rsi+18h]
 * 000000014000B8EF: test    rbx, rbx
 * 000000014000B8F2: jz      short loc_14000B917
 * 000000014000B8F4: mov     rcx, rbx
 * 000000014000B8F7: test    rbx, rbx
 * 000000014000B8FA: jz      loc_140033FA9
 * 000000014000B900: mov     rdi, [rbx+10h]
 * 000000014000B904: lea     rdx, [rbx+8]
 * 000000014000B908: mov     rbx, [rbx+8]
 * 000000014000B90C: cmp     dword ptr [rdi+28h], 4
 * 000000014000B910: jz      short loc_14000B93C
 * 000000014000B912: test    rbx, rbx
 * 000000014000B915: jnz     short loc_14000B8F4
 * 000000014000B917: mov     rcx, rsi; this
 * 000000014000B91A: call    ?FixupStreamPipe@CPipeInstance@@AEAAJXZ; CPipeInstance::FixupStreamPipe(void)
 * 000000014000B91F: mov     ebx, eax
 * 000000014000B921: test    eax, eax
 * 000000014000B923: js      loc_140033FB4
 * 000000014000B929: mov     rsi, [rsp+28h+arg_8]
 * 000000014000B92E: mov     eax, ebx
 * 000000014000B930: mov     rbx, [rsp+28h+arg_0]
 * 000000014000B935: add     rsp, 20h
 * 000000014000B939: pop     rdi
 * 000000014000B93A: retn
 * 000000014000B93C: mov     rax, [rcx]
 * 000000014000B93F: cmp     rcx, [rsi+10h]
 * 000000014000B943: jnz     short loc_14000B9AB
 * 000000014000B945: mov     [rsi+10h], rax
 * 000000014000B949: mov     r9, [rdx]
 * 000000014000B94C: cmp     rcx, [rsi+18h]
 * 000000014000B950: jz      short loc_14000B9B0
 * 000000014000B952: mov     rax, [rcx]
 * 000000014000B955: mov     [rax+8], r9
 * 000000014000B959: mov     rax, [rsi+30h]
 * 000000014000B95D: mov     [rcx], rax
 * 000000014000B960: sub     qword ptr [rsi+20h], 1
 * 000000014000B965: mov     [rsi+30h], rcx
 * 000000014000B969: jz      loc_140033F9A
 * 000000014000B96F: mov     rax, [rdi]
 * 000000014000B972: mov     edx, 1
 * 000000014000B977: mov     rcx, rdi
 * 000000014000B97A: mov     rax, [rax]
 * 000000014000B97D: call    cs:__guard_dispatch_icall_fptr
 * 000000014000B983: jmp     short loc_14000B912
 * 000000014000B985: cmp     dword ptr [rcx+84h], 0
 * 000000014000B98C: jnz     loc_14000B8DC
 * 000000014000B992: jmp     loc_140033F88
 * 000000014000B997: call    ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ; CPipeInstance::ResolveFormatConflictsRightLeft(void)
 * 000000014000B99C: mov     ebx, eax
 * 000000014000B99E: test    eax, eax
 * 000000014000B9A0: jns     loc_14000B8EB
 * 000000014000B9A6: jmp     loc_140033FB4
 * 000000014000B9AB: mov     [rbx], rax
 * 000000014000B9AE: jmp     short loc_14000B949
 * 000000014000B9B0: mov     [rsi+18h], r9
 * 000000014000B9B4: jmp     short loc_14000B959
 * 0000000140033F88: test    byte ptr [rcx+88h], 8
 * 0000000140033F8F: jnz     loc_14000B8DC
 * 0000000140033F95: jmp     loc_14000B997
 * 0000000140033F9A: lea     rcx, [rsi+10h]
 * 0000000140033F9E: call    ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ; ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(void)
 * 0000000140033FA3: nop
 * 0000000140033FA4: jmp     loc_14000B96F
 * 0000000140033FA9: mov     ecx, 80004005h; int
 * 0000000140033FAE: call    ?AtlThrowImpl@ATL@@YAXJ@Z; ATL::AtlThrowImpl(long)
 * 0000000140033FB4: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000140033FBB: lea     rax, WPP_GLOBAL_Control
 * 0000000140033FC2: cmp     rcx, rax
 * 0000000140033FC5: jz      short loc_140033FEE
 * 0000000140033FC7: test    dword ptr [rcx+1Ch], 20000h
 * 0000000140033FCE: jz      short loc_140033FEE
 * 0000000140033FD0: cmp     byte ptr [rcx+19h], 2
 * 0000000140033FD4: jb      short loc_140033FEE
 * 0000000140033FD6: mov     rcx, [rcx+10h]
 * 0000000140033FDA: lea     r8, WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids
 * 0000000140033FE1: mov     edx, 24h ; '$'
 * 0000000140033FE6: mov     r9d, ebx
 * 0000000140033FE9: call    WPP_SF_D
 * 0000000140033FEE: mov     r8d, ebx; int
 * 0000000140033FF1: lea     rcx, aCpipeinstanceI_0; "CPipeInstance::Initialize"
 * 0000000140033FF8: mov     edx, 9EAh; unsigned int
 * 0000000140033FFD: call    ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z; AudDGTraceLoggingErrorHelper(char const *,uint,long)
 * 0000000140034002: nop
 * 0000000140034003: jmp     loc_14000B929
 */
