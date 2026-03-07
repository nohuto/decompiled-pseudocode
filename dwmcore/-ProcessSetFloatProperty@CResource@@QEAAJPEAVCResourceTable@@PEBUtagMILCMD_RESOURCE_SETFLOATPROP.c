__int64 __fastcall CResource::ProcessSetFloatProperty(
        CResource *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RESOURCE_SETFLOATPROPERTY *a3)
{
  return (*(__int64 (__fastcall **)(CResource *, _QWORD, __int64, char *))(*(_QWORD *)this + 96LL))(
           this,
           *((unsigned int *)a3 + 2),
           18LL,
           (char *)a3 + 12);
}
