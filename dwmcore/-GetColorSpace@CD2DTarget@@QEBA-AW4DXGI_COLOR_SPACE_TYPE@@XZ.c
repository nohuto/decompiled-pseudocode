__int64 __fastcall CD2DTarget::GetColorSpace(CD2DTarget *this)
{
  __int64 (__fastcall ***v1)(_QWORD, _BYTE *); // rcx
  _BYTE v3[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*((_QWORD *)this + 3)
                                                 + 8LL
                                                 + *(int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 8LL) + 12LL));
  return *(unsigned int *)((**v1)(v1, v3) + 8);
}
