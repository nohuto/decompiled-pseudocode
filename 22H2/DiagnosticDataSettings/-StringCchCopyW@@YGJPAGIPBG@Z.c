/*
 * XREFs of ?StringCchCopyW@@YGJPAGIPBG@Z @ 0x100037B9
 * Callers:
 *     ?TelpGetTelemetryClientRegPath@@YGPAGXZ @ 0x100023F5 (-TelpGetTelemetryClientRegPath@@YGPAGXZ.c)
 *     _TelGetStringPolicy@12 @ 0x10002890 (_TelGetStringPolicy@12.c)
 *     _TelpReadUsersPolicySetting@12 @ 0x10002C36 (_TelpReadUsersPolicySetting@12.c)
 *     _TelIsOsInProcessorMode@4 @ 0x10003070 (_TelIsOsInProcessorMode@4.c)
 *     _TelGetRegionalSettingsValue@12 @ 0x10003210 (_TelGetRegionalSettingsValue@12.c)
 * Callees:
 *     StringCopyWorkerW @ 0x10003769 (StringCopyWorkerW.c)
 */

/*
 * Hex-Rays decompilation failed for ?StringCchCopyW@@YGJPAGIPBG@Z @ 0x100037B9
 * Reason: Hex-Rays returned no pseudocode for 0x100037B9
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000100037B9: mov     edi, edi
 * 00000000100037BB: push    ebp; pszSrc
 * 00000000100037BC: mov     ebp, esp
 * 00000000100037BE: xor     eax, eax
 * 00000000100037C0: test    edx, edx
 * 00000000100037C2: jz      short loc_100037CC
 * 00000000100037C4: cmp     edx, 7FFFFFFFh
 * 00000000100037CA: jbe     short loc_100037D1
 * 00000000100037CC: mov     eax, 80070057h
 * 00000000100037D1: test    eax, eax
 * 00000000100037D3: js      short loc_100037E1
 * 00000000100037D5: push    ecx; pcchNewDestLength
 * 00000000100037D6: push    [ebp+cchDest]; cchDest
 * 00000000100037D9: push    ecx; pszDest
 * 00000000100037DA: call    StringCopyWorkerW
 * 00000000100037DF: jmp     short loc_100037EA
 * 00000000100037E1: test    edx, edx
 * 00000000100037E3: jz      short loc_100037EA
 * 00000000100037E5: xor     edx, edx
 * 00000000100037E7: mov     [ecx], dx
 * 00000000100037EA: pop     ebp
 * 00000000100037EB: retn    4
 */
