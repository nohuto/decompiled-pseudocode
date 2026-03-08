/*
 * XREFs of PfpLogApplicationEvent @ 0x14035B9B8
 * Callers:
 *     PfProcessExitNotification @ 0x1407E6B80 (PfProcessExitNotification.c)
 *     PfCalculateProcessHash @ 0x1407E7450 (PfCalculateProcessHash.c)
 * Callees:
 *     PfLogEvent @ 0x14028D0D0 (PfLogEvent.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     MmGetDirectoryFrameFromProcess @ 0x1407E5140 (MmGetDirectoryFrameFromProcess.c)
 */

__int64 __fastcall PfpLogApplicationEvent(__int64 a1, _QWORD *a2, char a3)
{
  __int64 v5; // rax
  unsigned int v6; // esi
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 DirectoryFrameFromProcess; // rax
  unsigned __int16 *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // ebx
  int SessionId; // eax
  int v17; // ecx
  unsigned int v18; // eax
  unsigned int v19; // r9d
  int v20; // ecx
  __int64 v22; // rcx
  int v23; // eax
  _QWORD v24[3]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v25; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+40h] [rbp-C8h]
  PVOID v27; // [rsp+48h] [rbp-C0h]
  int v28; // [rsp+50h] [rbp-B8h]
  int v29; // [rsp+54h] [rbp-B4h]
  __int64 v30; // [rsp+58h] [rbp-B0h]
  __int64 v31; // [rsp+60h] [rbp-A8h]
  __int64 v32; // [rsp+68h] [rbp-A0h]
  int v33; // [rsp+70h] [rbp-98h]
  unsigned __int16 v34; // [rsp+74h] [rbp-94h]
  _WORD v35[989]; // [rsp+76h] [rbp-92h] BYREF
  __int64 v36; // [rsp+830h] [rbp+728h]

  *(_OWORD *)&v24[1] = 0LL;
  if ( dword_140C64FD8 >= (unsigned int)dword_140C64FDC )
    return 3221225659LL;
  v5 = *(unsigned int *)(a1 + 1088);
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 1128);
  v36 = 0LL;
  if ( a3 )
  {
    v22 = *(_QWORD *)(a1 + 1088) ^ v7;
    v25 = v5;
    LODWORD(v27) = v5;
    v23 = *(_DWORD *)(a1 + 1524);
    v26 = v22 & 0x1FFFFFFFFFFFFFFFLL;
    v20 = 14;
    HIDWORD(v27) = v23;
    v19 = 24;
  }
  else
  {
    v32 = v5;
    v8 = &v24[1];
    v29 = v5;
    HIDWORD(v25) = 0;
    if ( a2 )
      v8 = a2;
    v33 = 0;
    v9 = (*(_QWORD *)(a1 + 1088) ^ v7) & 0x1FFFFFFFFFFFFFFFLL;
    v35[0] = 0;
    v10 = *(_DWORD *)(a1 + 1524);
    v30 = v9;
    v28 = v10;
    DirectoryFrameFromProcess = MmGetDirectoryFrameFromProcess(a1, v8);
    v13 = *v12;
    v14 = *((_QWORD *)v12 + 1);
    v15 = v13;
    v31 = DirectoryFrameFromProcess;
    if ( (unsigned int)v13 > 0x7C0 )
      v15 = 1984;
    v34 = v15 >> 1;
    memmove(v35, (const void *)(v13 + v14 - v15), v15);
    v35[v34] = 0;
    SessionId = MmGetSessionIdEx(a1);
    v17 = 0;
    if ( SessionId != -1 )
      v17 = SessionId;
    LODWORD(v25) = v17;
    v18 = MmGetSessionIdEx(a1);
    v19 = v15 + 64;
    v20 = 1;
    if ( v18 != -1 )
      v6 = v18;
    v26 = v6;
    v27 = PsIdleProcess;
  }
  return PfLogEvent(
           v20,
           dword_140C64C2C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                         + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10),
           &v25,
           v19);
}
