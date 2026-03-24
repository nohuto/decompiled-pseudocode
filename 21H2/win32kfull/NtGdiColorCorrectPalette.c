/*
 * XREFs of NtGdiColorCorrectPalette @ 0x1C02B6C40
 * Callers:
 *     <none>
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0019C48 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z @ 0x1C01207DC (-ulGetEntries@XEPALOBJ@@QEAAKKKPEAUtagPALETTEENTRY@@H@Z.c)
 *     ?ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02BD808 (-ulSetEntries@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall NtGdiColorCorrectPalette(
        HDC a1,
        HPALETTE a2,
        unsigned int a3,
        unsigned int a4,
        struct tagPALETTEENTRY *Address,
        int a6)
{
  __int64 v6; // rdi
  unsigned int Entries; // ebx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v14; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v15[6]; // [rsp+40h] [rbp-38h] BYREF

  v6 = a4;
  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  EPALOBJ::EPALOBJ((EPALOBJ *)&v14, a2);
  Entries = 0;
  if ( !v15[0] || !v14 )
    goto LABEL_20;
  if ( !(_DWORD)v6
    || (v10 = *(unsigned int *)(v14 + 28), (unsigned int)v6 > (unsigned int)v10)
    || (unsigned int)v6 > 0x3FFFFFFF
    || a3 > (unsigned int)v10
    || a3 + (unsigned int)v6 > (unsigned int)v10 )
  {
    EngSetLastError(0x57u);
    DEC_SHARE_REF_CNT(v14, v12);
    DCOBJ::~DCOBJ((DCOBJ *)v15);
    return 0LL;
  }
  if ( (*(_DWORD *)(v15[0] + 120LL) & 1) != 0 )
  {
    if ( a6 )
    {
      if ( a6 == 1 )
      {
        v11 = v6;
        if ( 4 * v6 )
        {
          if ( ((unsigned __int8)Address & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&Address[v11] > MmUserProbeAddress || &Address[v11] < Address )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
        Entries = XEPALOBJ::ulSetEntries((XEPALOBJ *)&v14, a3, v6, Address);
      }
    }
    else
    {
      ProbeForWrite(Address, 4LL * (unsigned int)v6, 4u);
      Entries = XEPALOBJ::ulGetEntries((XEPALOBJ *)&v14, a3, v6, Address, 0);
    }
  }
  else
  {
LABEL_20:
    EngSetLastError(0x57u);
  }
  if ( v14 )
    DEC_SHARE_REF_CNT(v14, v10);
  DCOBJ::~DCOBJ((DCOBJ *)v15);
  return Entries;
}
