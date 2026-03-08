/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x140001A64
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x140001808 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x140001620 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x140001D44 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x140001D78 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x140001EB0 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x140002018 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     _invalid_parameter_noinfo @ 0x1400062E8 (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x1400071C8 (memmove_0.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x14000BA28 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *a2,
        unsigned __int64 a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rbx
  void *v8; // r14
  unsigned __int8 *v10; // rbx
  char v11; // si
  unsigned __int8 *v12; // r8
  bool v13; // al
  unsigned int v14; // r15d
  unsigned __int64 v15; // r12
  int v16; // eax
  __int64 v17; // r10
  unsigned __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned __int8 *InsertionPointOrIncrement; // rax
  int v21; // r14d
  unsigned __int64 Size; // rax
  char v23; // r10
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r8
  __int64 v26; // rdx
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rdx
  unsigned __int8 *v29; // rcx
  size_t v30; // r9
  size_t v31; // r8
  unsigned __int8 *v32; // r8
  unsigned int v34; // r15d
  unsigned int v35; // r14d
  unsigned __int8 *v36; // [rsp+30h] [rbp-50h] BYREF
  __int16 v37; // [rsp+38h] [rbp-48h] BYREF
  char v38; // [rsp+3Ah] [rbp-46h]
  unsigned int v39; // [rsp+3Ch] [rbp-44h]
  __int16 v40; // [rsp+40h] [rbp-40h]
  __int128 v41; // [rsp+48h] [rbp-38h]
  __int16 v42; // [rsp+58h] [rbp-28h] BYREF
  char v43; // [rsp+5Ah] [rbp-26h]
  unsigned int v44; // [rsp+5Ch] [rbp-24h]
  __int16 v45; // [rsp+60h] [rbp-20h]
  __int128 v46; // [rsp+68h] [rbp-18h]
  unsigned __int8 *v47; // [rsp+C0h] [rbp+40h] BYREF
  void *v48; // [rsp+C8h] [rbp+48h]
  void *v49; // [rsp+D8h] [rbp+58h]

  v49 = a4;
  v48 = a2;
  v6 = *((_QWORD *)this + 3);
  v8 = a2;
  if ( !v6 )
    return 0;
  v37 = *((_WORD *)this + 1);
  v10 = (unsigned __int8 *)(v6 + 10);
  v11 = 0;
  v38 = *((_BYTE *)this + 4);
  v39 = 0;
  v40 = 0;
  v41 = 0LL;
  while ( 1 )
  {
    v12 = (unsigned __int8 *)*((_QWORD *)this + 4);
    v36 = v10;
    v13 = wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v37, &v36, v12);
    v14 = a6;
    v15 = a5;
    if ( !v13 )
    {
      v10 = v36;
      *((_QWORD *)this + 4) = v36;
      goto LABEL_13;
    }
    v16 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v37, v8, a3);
    v17 = 0LL;
    if ( v16 < 0 )
    {
      v36 = v10;
      goto LABEL_12;
    }
    if ( !v16 )
      break;
    v10 = v36;
    v47 = v36;
    if ( *((_QWORD *)this + 2) )
    {
      v18 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / *((_QWORD *)this + 2);
      v19 = v39;
      if ( v39 > v18 )
      {
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v37, v18);
        v19 = v39;
      }
      v10 += *((_QWORD *)this + 2) * v19;
    }
    else
    {
      v34 = v39;
      v35 = 0;
      v42 = *((_WORD *)this + 3);
      v43 = *((_BYTE *)this + 8);
      v44 = 0;
      v45 = 0;
      v46 = 0LL;
      if ( v39 )
      {
        do
        {
          if ( !wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v42,
                  &v47,
                  *((unsigned __int8 **)this + 4)) )
            break;
          ++v35;
        }
        while ( v35 < v34 );
        v10 = v47;
      }
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v37, v35);
      v8 = v48;
    }
  }
  InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                this,
                                (struct wil::details_abi::UsageIndexProperty *)&v37,
                                v36,
                                v49,
                                v15,
                                v14);
  v17 = 0LL;
  v36 = InsertionPointOrIncrement;
  v10 = InsertionPointOrIncrement;
  if ( !InsertionPointOrIncrement )
    return 1;
  v11 = 1;
LABEL_12:
  if ( !v11 )
  {
LABEL_13:
    v21 = 1;
    *((_QWORD *)&v41 + 1) = v48;
    v39 = 1;
    v40 = a3;
    *(_QWORD *)&v41 = 0LL;
    wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v37);
    goto LABEL_14;
  }
  v21 = v39;
LABEL_14:
  v42 = *((_WORD *)this + 3);
  v43 = *((_BYTE *)this + 8);
  v44 = v14;
  v45 = v15;
  *(_QWORD *)&v46 = v17;
  *((_QWORD *)&v46 + 1) = v49;
  Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v42);
  v24 = *((_QWORD *)this + 5);
  v25 = *((_QWORD *)this + 4);
  v27 = v26 + Size;
  v28 = v24 - v25;
  if ( ((v24 - v25) & -(__int64)(v25 < v24)) < v27 )
    return 0;
  v29 = &v10[v27];
  v30 = v24 - v27 - (_QWORD)v10;
  v31 = v25 - (_QWORD)v10;
  if ( v31 )
  {
    if ( v29 && v10 )
    {
      if ( v30 >= v31 )
      {
        memmove_0(v29, v10, v31);
LABEL_37:
        v23 = 0;
        goto LABEL_16;
      }
      *(_DWORD *)_o__errno(v29, v28, v31, v30) = 34;
    }
    else
    {
      *(_DWORD *)_o__errno(v29, v28, v31, v30) = 22;
    }
    invalid_parameter_noinfo();
    goto LABEL_37;
  }
LABEL_16:
  v32 = (unsigned __int8 *)(v27 + *((_QWORD *)this + 4));
  *((_QWORD *)this + 4) = v32;
  if ( v11 )
  {
    if ( v38 != v23 )
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v37, v21 + 1);
  }
  else
  {
    wil::details_abi::UsageIndexProperty::Write((wil::details_abi::UsageIndexProperty *)&v37, &v36, v32);
  }
  wil::details_abi::UsageIndexProperty::Write(
    (wil::details_abi::UsageIndexProperty *)&v42,
    &v36,
    *((unsigned __int8 **)this + 4));
  *((_BYTE *)this + 56) = 1;
  return 1;
}
