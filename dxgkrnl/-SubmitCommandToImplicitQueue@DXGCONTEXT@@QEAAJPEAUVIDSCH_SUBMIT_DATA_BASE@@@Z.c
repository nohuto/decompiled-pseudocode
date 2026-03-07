__int64 __fastcall DXGCONTEXT::SubmitCommandToImplicitQueue(DXGCONTEXT *this, struct VIDSCH_SUBMIT_DATA_BASE *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8

  v2 = *((_QWORD *)this + 2);
  if ( (*((_DWORD *)this + 101) & 0x10) == 0 )
    return (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *, DXGCONTEXT *, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 736LL) + 8LL) + 424LL))(
             *((_QWORD *)this + 32),
             a2,
             this,
             a2);
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 736LL) + 8LL);
  return (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *, __int64, struct VIDSCH_SUBMIT_DATA_BASE *))(v3 + 432))(
           *((_QWORD *)this + 36),
           a2,
           v3,
           a2);
}
