bool __fastcall CBrushDrawListGenerator::IsColorConversionRequired(CBrushDrawListGenerator *this)
{
  __int64 (__fastcall ***v2)(_QWORD, _BYTE *); // rcx
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned int v5; // edi
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*(int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 8LL) + 12LL)
                                                 + *(_QWORD *)(*(_QWORD *)this + 32LL)
                                                 + 8LL);
  v3 = (**v2)(v2, v7);
  v4 = *((_QWORD *)this + 5);
  v5 = *(_DWORD *)(v3 + 8);
  if ( v4 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4) )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 16LL))(v4, v5);
  else
    return v5 == 1;
}
