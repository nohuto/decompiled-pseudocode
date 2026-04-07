/*
 * XREFs of ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18008EE68
 * Callers:
 *     ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18008E8D0 (-NotifyFailure@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?NotifyFailure@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180094C00 (-NotifyFailure@-$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?NotifyFailure@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800BA220 (-NotifyFailure@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsP.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180041AD8 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     memset_0 @ 0x180057E72 (memset_0.c)
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x18007D900 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x18007D97C (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x18007F4E0 (-ResultStringSize@details@wil@@YA_KPEBD@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBG@Z @ 0x18007F50C (-ResultStringSize@details@wil@@YA_KPEBG@Z.c)
 */

void __fastcall wil::StoredFailureInfo::SetFailureInfo(wil::StoredFailureInfo *this, const struct wil::FailureInfo *a2)
{
  __int64 v4; // rdi
  const unsigned __int16 *v5; // rdx
  __int64 v6; // rdi
  const unsigned __int16 *v7; // rdx
  __int64 v8; // rdi
  const char *v9; // rdx
  __int64 v10; // rdi
  const char *v11; // rdx
  __int64 v12; // rdi
  const char *v13; // rdx
  __int64 v14; // rdi
  const char *v15; // rdx
  __int64 v16; // rdi
  const char *v17; // rdx
  __int64 v18; // rdi
  const char *v19; // rdx
  __int64 v20; // rdi
  const char *v21; // rdx
  unsigned __int64 v22; // rdi
  volatile signed __int32 **v23; // rsi
  _DWORD *v24; // rax
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v26; // rax
  volatile signed __int32 *v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // r10
  const unsigned __int16 *v30; // rbx
  char *v31; // rax
  char *v32; // rax
  char *v33; // rax
  char *v34; // rax
  char *v35; // rax
  char *v36; // rax
  unsigned __int16 *v37; // rax
  char *v38; // rax
  unsigned __int16 *v39; // rax
  char *v40; // rax

  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 8);
  v4 = wil::details::ResultStringSize(*((wil::details **)a2 + 14), (const unsigned __int16 *)a2);
  v6 = wil::details::ResultStringSize(*((wil::details **)a2 + 11), v5) + v4;
  v8 = wil::details::ResultStringSize(*((wil::details **)a2 + 2), v7) + v6;
  v10 = wil::details::ResultStringSize(*((wil::details **)a2 + 13), v9) + v8;
  v12 = wil::details::ResultStringSize(*((wil::details **)a2 + 10), v11) + v10;
  v14 = wil::details::ResultStringSize(*((wil::details **)a2 + 8), v13) + v12;
  v16 = wil::details::ResultStringSize(*((wil::details **)a2 + 6), v15) + v14;
  v18 = wil::details::ResultStringSize(*((wil::details **)a2 + 5), v17) + v16;
  v20 = wil::details::ResultStringSize(*((wil::details **)a2 + 4), v19) + v18;
  v22 = wil::details::ResultStringSize(*((wil::details **)a2 + 15), v21) + v20;
  v23 = (volatile signed __int32 **)((char *)this + 144);
  v24 = (_DWORD *)*((_QWORD *)this + 18);
  if ( !v24 || *v24 != 1 || *((_QWORD *)this + 19) < v22 )
  {
    wil::details::shared_buffer::reset((LPVOID *)this + 18);
    if ( v22 )
    {
      ProcessHeap = GetProcessHeap();
      v26 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, v22 + 4);
      v27 = v26;
      if ( v26 )
      {
        *v26 = 0;
        wil::details::shared_buffer::reset((LPVOID *)this + 18);
        *v23 = v27;
        *((_QWORD *)this + 19) = v22;
        _InterlockedIncrement(v27);
      }
    }
    else
    {
      wil::details::shared_buffer::reset((LPVOID *)this + 18);
    }
  }
  v28 = (__int64)(*v23 + 1);
  v29 = v28 & -(__int64)(*v23 != 0LL);
  if ( v29 )
    v30 = (const unsigned __int16 *)(*((_QWORD *)this + 19) + v29);
  else
    v30 = 0LL;
  if ( v29 )
  {
    v31 = wil::details::WriteResultString<unsigned short const *>(
            (unsigned __int16 *)(v28 & -(__int64)(*v23 != 0LL)),
            v30,
            *((wil::details **)a2 + 2),
            (unsigned __int16 **)this + 2);
    v32 = wil::details::WriteResultString<char const *>(
            v31,
            (const char *)v30,
            *((wil::details **)a2 + 4),
            (char **)this + 4);
    v33 = wil::details::WriteResultString<char const *>(
            v32,
            (const char *)v30,
            *((wil::details **)a2 + 5),
            (char **)this + 5);
    v34 = wil::details::WriteResultString<char const *>(
            v33,
            (const char *)v30,
            *((wil::details **)a2 + 6),
            (char **)this + 6);
    v35 = wil::details::WriteResultString<char const *>(
            v34,
            (const char *)v30,
            *((wil::details **)a2 + 8),
            (char **)this + 8);
    v36 = wil::details::WriteResultString<char const *>(
            v35,
            (const char *)v30,
            *((wil::details **)a2 + 15),
            (char **)this + 15);
    v37 = (unsigned __int16 *)wil::details::WriteResultString<char const *>(
                                v36,
                                (const char *)v30,
                                *((wil::details **)a2 + 13),
                                (char **)this + 13);
    v38 = wil::details::WriteResultString<unsigned short const *>(
            v37,
            v30,
            *((wil::details **)a2 + 14),
            (unsigned __int16 **)this + 14);
    v39 = (unsigned __int16 *)wil::details::WriteResultString<char const *>(
                                v38,
                                (const char *)v30,
                                *((wil::details **)a2 + 10),
                                (char **)this + 10);
    v40 = wil::details::WriteResultString<unsigned short const *>(
            v39,
            v30,
            *((wil::details **)a2 + 11),
            (unsigned __int16 **)this + 11);
    memset_0(v40, 0, (char *)v30 - v40);
  }
}
