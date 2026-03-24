/*
 * XREFs of ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C00C3720
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001FC0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00178A0 (__security_check_cookie.c)
 *     ??0VIDMM_CPU_HOST_APERTURE@@QEAA@XZ @ 0x1C0028B9C (--0VIDMM_CPU_HOST_APERTURE@@QEAA@XZ.c)
 *     ?BlockRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1C0028E94 (-BlockRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@_KI@Z @ 0x1C00290F8 (-Init@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAVVIDMM_MEMORY_SEGMENT@@_KI@Z.c)
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C0090640 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::Init(PHYSICAL_ADDRESS *this, void (*a2)(void *), union _LARGE_INTEGER *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  PHYSICAL_ADDRESS v7; // r8
  DWORD LowPart; // edx
  char v9; // al
  __int64 v10; // rdx
  PHYSICAL_ADDRESS v11; // rcx
  __int64 v12; // rax
  VIDMM_CPU_HOST_APERTURE *v14; // rax
  __int64 v15; // rcx
  VIDMM_CPU_HOST_APERTURE *v16; // rax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // ebp
  int v27; // edx
  __int64 v28; // r8
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rdi
  int v33; // edi
  unsigned int v34; // esi
  __int64 v35; // rax
  VIDMM_CPU_HOST_APERTURE *QuadPart; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int128 SystemInformation; // [rsp+20h] [rbp-48h] BYREF
  __int128 v42; // [rsp+30h] [rbp-38h]

  v3 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v6 = WdLogNewEntry5_WdTrace(this);
    *(_QWORD *)(v6 + 24) = this[2].LowPart;
    *(_QWORD *)(v6 + 32) = this;
  }
  v7 = this[1];
  LowPart = this[10].LowPart;
  if ( *(_DWORD *)(v7.QuadPart + 32) < 0x9006u )
  {
    LowPart &= ~0x10u;
    this[10].LowPart = LowPart;
  }
  if ( (LowPart & 0x10) != 0 || (v9 = 0, (*(_DWORD *)(*(_QWORD *)(v7.QuadPart + 24) + 348LL) & 8) != 0) )
    v9 = 1;
  v10 = LowPart | 0x10;
  BYTE2(this[59].u.LowPart) = v9;
  this[10].LowPart = v10;
  if ( (v10 & 0x40) != 0 )
  {
    v11.QuadPart = (unsigned int)(qword_1C00504F8 - 0x800000);
    if ( this[8].QuadPart > (unsigned __int64)v11.QuadPart )
    {
      v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(
              (PHYSICAL_ADDRESS)v11.QuadPart,
              v10,
              (PHYSICAL_ADDRESS)v7.QuadPart);
      *(_QWORD *)(v12 + 24) = 272LL;
      WdLogEvent5_WdAssertion(v12);
      return 3221225473LL;
    }
    *(_QWORD *)(v7.QuadPart + 7040) += this[6].QuadPart;
    LODWORD(v10) = this[10].LowPart;
  }
  this[26] = this[6];
  if ( (v10 & 0x2000) != 0 )
  {
    v14 = (VIDMM_CPU_HOST_APERTURE *)operator new[](0x48uLL, 0x35346956u, PagedPool);
    if ( v14 )
      v16 = VIDMM_CPU_HOST_APERTURE::VIDMM_CPU_HOST_APERTURE(v14);
    else
      v16 = 0LL;
    this[61].QuadPart = (LONGLONG)v16;
    if ( !v16 )
    {
      _InterlockedIncrement(&dword_1C0050784);
      v17 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v17 + 24) = 302LL;
      WdLogEvent5_WdLowResource(v17);
      return 3221225495LL;
    }
    v18 = VIDMM_CPU_HOST_APERTURE::Init(v16, (struct VIDMM_MEMORY_SEGMENT *)this, this[4].QuadPart, this[5].LowPart);
    v22 = v18;
    if ( v18 < 0 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v20, v19, v21);
      *(_QWORD *)(v23 + 24) = v22;
      WdLogEvent5_WdAssertion(v23);
      return (unsigned int)v22;
    }
  }
  v26 = VIDMM_SEGMENT::Init(this, a2, 0LL);
  if ( v26 >= 0 && (this[10].LowPart & 0x2000) != 0 )
  {
    if ( this[11].LowPart )
    {
      v24 = *(_QWORD *)(this[1].QuadPart + 24);
      v25 = *(unsigned int *)(v24 + 348);
      if ( (v25 & 0x8000) != 0 && (v25 & 0x10000) != 0 )
      {
        SystemInformation = 0LL;
        v42 = 0LL;
        if ( ZwQuerySystemInformation(
               MaxSystemInfoClass|SystemTimeAdjustmentInformation,
               &SystemInformation,
               0x20u,
               0LL) >= 0 )
        {
          if ( DWORD2(v42) == 1 )
            goto LABEL_31;
          if ( DWORD2(v42) == 2 )
          {
LABEL_30:
            v27 = 4;
LABEL_32:
            v28 = this[47].LowPart;
            v25 = 12LL;
            if ( v28 != 4096 )
              v25 = 16LL;
            v29 = (__int64)SystemInformation >> v25;
            v30 = (unsigned int)(v42 * HIDWORD(SystemInformation) * v27);
            LOBYTE(v3) = ((v28 - 1) & v30) != 0;
            v31 = (v30 >> v25) - 1 + ((__int64)SystemInformation >> v25) + v3;
            v24 = this[4].QuadPart >> v25;
            v32 = v24 + this[5].LowPart - 1;
            if ( v24 > (__int64)SystemInformation >> v25 )
              v29 = this[4].QuadPart >> v25;
            if ( v32 >= v31 )
              v32 = v31;
            if ( v29 <= v32 )
            {
              v33 = v32 - v29;
              v34 = v29 - v24;
              v35 = WdLogNewEntry5_WdEvent(v25, v24);
              *(_QWORD *)(v35 + 24) = v34;
              *(_QWORD *)(v35 + 32) = (unsigned int)(v33 + 1);
              WdLogEvent5_WdEvent(v35);
              QuadPart = (VIDMM_CPU_HOST_APERTURE *)this[61].QuadPart;
              this[11].HighPart = v34;
              this[12].LowPart = v34 + v33;
              v26 = VIDMM_CPU_HOST_APERTURE::BlockRange(
                      QuadPart,
                      (struct VIDMM_CPU_HOST_APERTURE_RANGE *)((char *)&this[11].QuadPart + 4));
            }
            goto LABEL_40;
          }
          v25 = (unsigned int)(DWORD2(v42) - 3);
          if ( DWORD2(v42) == 3 )
          {
LABEL_31:
            v27 = 3;
            goto LABEL_32;
          }
          if ( DWORD2(v42) == 4 )
            goto LABEL_30;
        }
      }
    }
  }
LABEL_40:
  BYTE1(this[59].LowPart) = 1;
  v37 = WdLogNewEntry5_WdEvent(v25, v24);
  WdLogEvent5_WdEvent(v37);
  v40 = (_QWORD *)WdLogNewEntry5_WdEvent(v39, v38);
  v40[3] = this[6].QuadPart;
  v40[4] = this[3].HighPart;
  v40[5] = this[3].LowPart;
  v40[6] = this[2].LowPart;
  WdLogEvent5_WdEvent(v40);
  return (unsigned int)v26;
}
