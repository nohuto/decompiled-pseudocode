struct _LUID __fastcall COverlayContext::GetAdapterLuid(COverlayContext *this, _QWORD *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, _BYTE *); // rcx
  __int64 v4; // rcx
  struct _LUID result; // rax
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(_QWORD *)this
                                                 + 8LL
                                                 + *(int *)(*(_QWORD *)(*(_QWORD *)this + 8LL) + 12LL));
  v4 = *(_QWORD *)(**v3)(v3, v6);
  result = (struct _LUID)a2;
  *a2 = v4;
  return result;
}
