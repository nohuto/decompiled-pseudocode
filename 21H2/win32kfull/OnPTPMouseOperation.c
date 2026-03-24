/*
 * XREFs of OnPTPMouseOperation @ 0x1C0213C10
 * Callers:
 *     <none>
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00C14A4 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00C14D0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D85AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?ConvertPTPMouseEventToMouseInputData@@YAXPEBUtagPTPMOUSEEVENT@@PEAU_MOUSE_INPUT_DATA@@@Z @ 0x1C02133F8 (-ConvertPTPMouseEventToMouseInputData@@YAXPEBUtagPTPMOUSEEVENT@@PEAU_MOUSE_INPUT_DATA@@@Z.c)
 *     ?UnqueuePTPMouseEvent@@YA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z @ 0x1C0213788 (-UnqueuePTPMouseEvent@@YA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z.c)
 */

void OnPTPMouseOperation()
{
  __int64 v0; // r8
  __int64 v1; // r9
  __int64 v2; // rbx
  int v3; // edi
  __int64 v4; // r10
  bool v5; // [rsp+48h] [rbp-69h] BYREF
  __int64 v6; // [rsp+50h] [rbp-61h] BYREF
  __int64 v7; // [rsp+58h] [rbp-59h] BYREF
  __int64 *v8; // [rsp+60h] [rbp-51h] BYREF
  __int128 v9; // [rsp+68h] [rbp-49h] BYREF
  __int128 v10; // [rsp+78h] [rbp-39h]
  __int128 v11; // [rsp+88h] [rbp-29h]
  _OWORD v12[3]; // [rsp+98h] [rbp-19h] BYREF
  _MOUSE_INPUT_DATA v13; // [rsp+C8h] [rbp+17h] BYREF
  struct _MOUSE_INPUT_DATA v14; // [rsp+E0h] [rbp+2Fh] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v8, "PTPMouseOperation", 0LL);
  memset(&v13, 0, sizeof(v13));
  memset(&v14, 0, sizeof(v14));
  v9 = 0LL;
  v5 = 0;
  v10 = 0LL;
  v11 = 0LL;
  memset(v12, 0, sizeof(v12));
  while ( UnqueuePTPMouseEvent((struct tagPTPMOUSEEVENT *)&v9, (struct tagPTPMOUSEEVENT *)v12, &v5) )
  {
    ConvertPTPMouseEventToMouseInputData((const struct tagPTPMOUSEEVENT *)&v9, &v13);
    v2 = *((_QWORD *)&v10 + 1);
    v3 = 8 * ((v10 & 1) == 0) + 1888;
    if ( (unsigned int)dword_1C0330B20 > 4
      && (qword_1C0330B30 & 0x40) != 0
      && (qword_1C0330B38 & 0x40) == qword_1C0330B38 )
    {
      v6 = (__int64)"PTPMouseOperation";
      v7 = *((_QWORD *)&v10 + 1);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
        (__int64)&dword_1C0330B20,
        byte_1C02F1732,
        v0,
        v1,
        (__int64)&v7,
        (void **)&v6);
    }
    if ( v5 && (_QWORD)v9 == *(_QWORD *)&v12[0] )
    {
      ConvertPTPMouseEventToMouseInputData((const struct tagPTPMOUSEEVENT *)v12, &v14);
      SynthesizeMouseInputWithNextPreview(v4, &v13, v11, v2, *((_QWORD *)&v11 + 1), v3, &v14);
    }
    else
    {
      SynthesizeMouseInput(v9, &v13, v11, v2, v3, *((_QWORD *)&v11 + 1));
    }
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v8);
}
