void __fastcall CoreMessaging::Calling::SendProcessor::MarshalLPCWSTR(
        CoreMessaging::Calling::SendProcessor *this,
        int *a2,
        const unsigned __int16 *a3)
{
  if ( a3 )
    memmove(a2, a3, *((unsigned int *)this + 21));
}
